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
 vector<int>v[n+1];
 int ans=0,tot=0;
 int mn=INT_MAX;
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  for(int j=0;j<x;j++){
    int y;
    cin>>y;
    v[i].push_back(y);
  }
  sort(all(v[i]));
  ans+=v[i][0];
  tot+=v[i][1];
 }
  int sum=0;
 for(int i=0;i<n;i++){
  sum+=mn+tot-v[i][1];
  ans=max(ans,sum);
  sum=0;
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