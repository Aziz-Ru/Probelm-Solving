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


void solve(){
  int n,k;
  cin>>n>>k;
  if(k==0) cout<<n*(n+1)/2<<nl;
  else{
    int ans=n*(n+1)/2,rem=0,it=1;
    while(n&&it<=k){
       n/=2;
      rem+=(n*(n+1))/2;
     
      it++;
    }
    cout<<ans-rem<<nl;

  }
  
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