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
	vector<int>v(n);
	set<int>p;
	for(int i=0;i<n;i++) {
		cin>>v[i];
		p.insert(v[i]);
	}
	int res=0;
	//for(auto x:p) cout<<x<<" ";
	while(p.count(res)&&m){
		m--;
		res++;
	}
	cout<<res;

}
int main() {
  fast;
  solve();
  return 0;
}