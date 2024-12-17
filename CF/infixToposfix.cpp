#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) (x.size())
const int siz=2e5+7,Inf=1e9+7;

int sign(char c){
  if(c=='+'||c=='-') return 1;
  else if(c=='*'||c=='/') return 2;
  else if(c == '^') return 3;
  else return -1;
}
void solve(){
string s,res="";
cin>>s;
stack<char>sc ;
for(int i=0;i<s.size();i++){
  char c=s[i];
  if(c>='a'&&c<='z') res+=c;
  else if(c=='(') sc.push(c);
  else if(c==')'){
    while(!sc.empty()&&sc.top()!='('){
      res+=sc.top();
      sc.pop();
    }
    if(!sc.empty()){
      sc.pop();
    }
    
  }
//  &&sc.top()!='('
  else{
    while(!sc.empty()&&sign(c)<=sign(sc.top())){
      res+=sc.top();
      sc.pop();
    }
    sc.push(c);
  }
}
while(!sc.empty()) {
  if(sc.top()!='(')res+=sc.top();
  sc.pop();
}
cout<<res<<nl;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  solve();
  return 0;
}