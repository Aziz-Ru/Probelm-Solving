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
int n;
int v[siz];
int big(){
	return max_element(v,v+n)-v;
}
int smal(){
	return min_element(v,v+n)-v;
}
void solve(){
 cin>>n;
int mx=0,mn=INT_MAX;

for(int i=0;i<n;i++){
	cin>>v[i];

mx=max(mx,v[i]);
mn=min(mn,v[i]);}
if(mn==mx){
		cout<<0<<nl;
	return;

}

if(mn==1) {
	cout<<"-1"<<nl;
	return;
}


vector <pair<int,int>> ans;
   while(1) {
      int i = big(), j = smal();
      if(v[i] == v[j]) break;
      ans.emplace_back(i+1, j+1);
      v[i] = (v[i] + v[j] - 1) / v[j];
   }
  // for(int i=0;i<n;i++) cout<<v[i]<<" ";
   cout<<ans.size()<<nl;
   for(auto x:ans)
   	cout<<x.ff<<" "<<x.ss<<nl;
   cout<<nl;

}
int main() {
  fast;
  TC
  solve();
  return 0;
}