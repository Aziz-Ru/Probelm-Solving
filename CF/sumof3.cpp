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
ll dp[sz];

void solve(){
	int n,sm;
	 cin>>n>>sm;
	ll a[n];
    vector<pair<int,int>>v;
	for(int i=0;i<n;i++) {
		int x;cin>>x;
		v.pb({x,i+1});
	}
    sort(all(v));
    bool ok=false;
	for(int i=0;i<n-2;i++){
		int k=i+1,l=n-1;
		
		while(k<l){
			if(v[i].ff+v[k].ff+v[l].ff==sm){
				ok=true;
				cout<<v[i].ss<<" "<<v[k].ss<<" "<<v[l].ss;
				 return;
			}
			else if(v[i].ff+v[k].ff+v[l].ff<sm) k++;
			else l--;
		}
		if(ok) break;
		
	}
	
	 cout<<"IMPOSSIBLE";


}
int main() {
  fast;
  
 // TC
  solve();
  return 0;
}