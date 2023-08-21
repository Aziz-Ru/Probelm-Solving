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
int n; cin>>n;
int ans=0;
for(int i=1;i<=n;i++){
  vector<int>v(n+1);
  for(int j=1;j<=n;j++) v[j]=j;
  reverse(v.end()-i,v.end());
int sm=0,mx=0;
  for(int j=1;j<=n;j++){
  sm+=(j*v[j]);
  mx=max(mx,j*v[j]);
  }
  sm-=mx;
  ans=max(ans,sm);
}
  cout<<ans<<nl;
}

int32_t main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
    //cout<<"Case "<<i<<':';
    solve();
  }
  return 0;
}