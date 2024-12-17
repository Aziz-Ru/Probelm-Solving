#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
if(n==1){
	cout<<1<<nl;
	return;
}
if(n&1){
	cout<<"-1"<<nl;
	return;
}
vector<int>v;
v.pb(n);

for(int i=n-1;i>1;i-=2){
  v.pb(i);
  if(i>1){
  	v.pb(n+1-i);
  }
}
v.pb(1);
for(auto x:v) cout<<x<<' ';
cout<<nl;
}
int32_t main() {
  fast;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  TC
  solve();
  return 0;
}