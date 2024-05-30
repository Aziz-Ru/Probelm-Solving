#include <bits/stdc++.h>
using namespace std;
# define int long long int 

string addOne(string &s){
    int cnt=1,i=s.size()-1; 
    string ans;
    while(i>=0||cnt){
        int x=cnt;
        if(i>=0){
            x+=s[i]-'0'; 
        }
        cnt=x/2;
        ans.push_back('0'+x%2);
        i--;
       
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
void solve(){
    string s;
    cin>>s;
    int i=s.size()-1,cnt=0;
    while(i>0){
        if(s[i]=='1'){
            s=s.substr(0,i+1);
           s= addOne(s);
           i=s.size()-1;
           cout<<s<<' '<<i<<'\n';
        }
        else{
            i--;

        }
        cnt++;
    }
    cout<<cnt;
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