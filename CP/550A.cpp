#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void solve(){
string s;
cin>>s;
bool ok1=false,ok2=false;
for(int i=0;i<s.size();i++){
if(s.substr(i,2)=="AB"){
  ok1=true;
  for(int j=i+2;j<s.size();j++){
    //cout<<j<<' ';
    if(s.substr(j,2)=="BA"){
      ok2=true;
      break;
    }
 }
 break;
}

}

if(ok2&&ok1) {
  cout<<"YES";
  return;
}

for(int i=0;i<s.size();i++){
if(s.substr(i,2)=="BA"){
  ok1=true;
  for(int j=i+2;j<s.size();j++){
    //cout<<j<<' ';
    if(s.substr(j,2)=="AB"){
      ok2=true;
      break;
    }
 }
  break;
}

}
if(ok2&&ok1) cout<<"YES";
else cout<<"NO";

}

int32_t main() {
  Fast;
  // int t; cin>>t;
  // while(t--)
  solve();
  
  return 0;
}