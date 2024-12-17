#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll siz=2e5+7,Inf=1e9+7;

void solve(){
ll n,x; cin>>n>>x;
std::vector<pair<int,int>>v;

for(int i=0;i<n;i++){
	int x; cin>>x;
	v.pb({x,1});
}
ll sm=0,p=0;
while(p<v.size()&&v[p].ff%x==0){
	sm+=v[p].ff*v[p].ss;
	v.pb({v[p].ff/x,v[p].ss*x});
	p++;
}
while(p<v.size()){
	sm+=v[p].ff*v[p].ss;
	p++;
}
cout<<sm<<nl;
}
int main() {
  fast;
  TC
  solve();
  return 0;
}