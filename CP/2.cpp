#include <bits/stdc++.h>
using namespace std;
# define int long long int 

int  string_to_number(string s){
  int cnt=1,n=0;
  for(int i=s.size()-1;i>=0;i--){
    n=(cnt*(s[i]-'0'))+n;
    cnt*=10;
  }
return n;
  
}

unordered_map<string,int> get_atoms( string s){
    unordered_map<string,int> ma;
    for(int i=0;i<s.size();){
        string atom="";
        string nums="";
        atom+=s[i];
        i++;
        
        while(i<s.size() && s[i]>'a' ){
            atom+=s[i];
            i+=1;
        }
        while(i<s.size() && s[i]-'0'<10){
            nums+=s[i];
            i+=1;
        }
        int num=string_to_number(nums);
        if(num==0) num=1;
        ma[atom]=num;

    }

    return ma;
}

string countOfAtoms(string s) {
        map<string,int>ar;
        stack<string>st;
        int n=s.size();

        for(int i=0;i<n;){
            if(s[i]=='('){
                st.push(s[i]);
                i++;
            }
            else if(s[i]!='('&&s[i]!=')'){
                st.push(s[i]);    
                i++;
            }

            else if(s[i]==')'){
                i++;
                string nums;
                while(i<n && s[i]-'0'<10 &&s[i]!='(' &&  s[i]!=')'){
                    nums.push_back(s[i]);
                    i++;
                }

                int num=string_to_number(nums);
                if(num==0) num=1;
                string formula="";
                while(!st.empty() && st.top()!='('){
                    formula+=(st.top());
                    st.pop();
                }
                if(!st.empty())st.pop();

                reverse(formula.begin(),formula.end());
                cout<<formula<<'\n';
                unordered_map<string,int> at=get_atoms(formula);
                for(auto x:at){
                    for(auto ch:x.first){
                        st.push(ch);
                    }
                    if(ar.find(x.first)!=ar.end()){
                        ar[x.first]*=num;
                    }
                   else  ar[x.first]+=num;
                    // cout<<ar[x.first]<<' ';
                }
            }
        }

        string ans="";
        for(auto x:ar){
            ans+=x.first;
            if(x.second>1){
                ans+=to_string(x.second);
            }
            cout<<x.first<<' '<<x.second<<'\n';
        }
        cout<<ans;
        return ans;
}


void solve(){
   // map<string,int> ma=get_atoms("BeS4O3");
   // for(auto x:ma)cout<<x.first<<' '<<x.second<<'\n';
    countOfAtoms("K4(ON(SO3)2)2");
}



int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t; 
  while(t--){
    solve();
  }   
  return 0;
  
}