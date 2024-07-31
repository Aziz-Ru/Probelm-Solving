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

vector<string> getAtom(string s){
    // cout<<s<<'\n';
    vector<string> v;
    if(s.size()==1){
        return {s,"1"};
    }
    string at="";
    int i=0;
    while(i<s.size() && s[i]-'0'>10){
        at+=s[i];
        i++;
    }
    string num=s.substr(i); 
    if(!num.size()) num="1";
    return {at,num};
}

string countOfAtoms(string s) {
    stack<string>stk;
    int n=s.size();
    for(int i=0;i<n;){
        if(s[i]=='('){
            string brck="("; 
            stk.push(brck);
            i+=1;
        }
        if(s[i]==')'){
            i+=1;
            string nums;
            while(i<n && s[i]-'0'<10 &&s[i]!='(' &&  s[i]!=')'){
                nums.push_back(s[i]);
                i++;
            }

            int num=string_to_number(nums); 
            if(num==0) num=1;
            vector<string> a;
            while(!stk.empty() && stk.top()!="("){
                string ato=stk.top();
                vector<string> gato=getAtom(ato);
                int gm=string_to_number(gato[1]);
                int k=gm*num;
                a.push_back(gato[0]+to_string(k));
                // cout<<a.back();
                stk.pop();
            }
            if(!stk.empty()){
                // cout<<stk.top()<<' ';
                stk.pop();
            } 
            while(a.size()){
                stk.push(a.back()); 
                a.pop_back();
            }

            
        }
        else {
            
            while(i<n && s[i]!='(' && s[i]!=')'){
                string atom="";
                atom+=s[i]; 
                i+=1;
                if(s[i]>='a' && s[i]<='z'){
                    atom+=s[i];
                    i+=1;
                }
                string nums="";
                while(i<n && s[i]!='(' && s[i]!=')' && s[i]-'0'<10){
                    nums+=s[i];
                    i++;
                }
                atom+=nums;
                // cout<<atom<<'\n';
                stk.push(atom);

            }
        }
    }
    map<string,int> mp;
    while(!stk.empty()){
        vector<string> vs=getAtom(stk.top());
        cout<<stk.top()<<'\n';
        int num=string_to_number(vs[1]);
        mp[vs[0]]+=num;
        stk.pop();
    }
    string ans="";
    for(auto x:mp){
        if(x.second>1)ans+=x.first+to_string(x.second);
        else ans+=x.first;
    }
    cout<<ans<<'\n';

return ans;
}

void solve(){
    
    countOfAtoms("Mg(H2O)N");
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
