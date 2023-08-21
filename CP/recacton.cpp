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
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
int n,m;
cin>>n>>m;
map<int,int>used;
std::vector<int> v;
for(int i=0;i<m;i++){
int x; cin>>x;
if(used.count(x)==0){
	used[x]++;
	v.pb(i+1);
	
}
}
//cout<<v.size()<<" ";
int p=v.size();
if(n-p>0){
	for(int i=0;i<n-p;i++)
		cout<<"-1"<<" ";
}
int ls;
if(n-p>0) ls=p;
else ls=n;
for(int i=ls-1;i>=0;i--) cout<<v[i]<<" ";
cout<<nl;



}
int main() {
  fast;

  TC
  solve();
  return 0;
}