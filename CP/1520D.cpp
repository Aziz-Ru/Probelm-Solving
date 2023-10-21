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
 map<int,int>mm;
 for(int i=1;i<=n;i++){
  int x; cin>>x;
  mm[x-i]++;
 }
 int ans=0;
 // cout<<mm.size()<<' ';
 for(auto x:mm){
 ans+=(x.ss*(x.ss-1))/2;
 }
 cout<<ans<<nl;
}

int32_t main() {
  Fast;
  int t; cin>>t;
  while(t--)solve();
  
  return 0;
}