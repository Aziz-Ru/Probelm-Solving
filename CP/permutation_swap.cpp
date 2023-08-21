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
#define sz(x) int(x.size())
const int siz=2e5+7,Inf=1e9+7;

void solve(){
  int n; cin>>n; 
  vector<int>v(n+1);
  for(int i=1;i<=n;i++){
    cin>>v[i]; 
  }
set<int>s;
 for(int i=1;i<=n;i++){
  if(i-v[i]==0) continue;
  else{
   s.insert(abs(i-v[i]));
  }

 }
int mx=*max_element(all(s));
int mn=1;
for(int i=2;i<=mx;i++){
  bool ok=true;
  for(auto x:s) {
   // cout<<x<<' ';
    if(x%i!=0){
      ok=false;
      break;
    }
  }
  if(ok) mn=i;
}
cout<<mn<<nl;
 
  
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  TC
  solve();
  return 0;
}