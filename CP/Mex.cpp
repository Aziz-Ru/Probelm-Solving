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
    int p,q,r;
    vector<pair<int,int>>vp;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		vp.pb({a[i],i+1});
	}
    sort(a,a+n);
    bool ok=false;
	for(int i=0;i<n-2;i++){
		int k=i+1,l=n-1;
		
		while(k<l){
			if(a[i]+a[k]+a[l]==sm){
				ok=true;
				cout<<vp[a[i]].ss<<" "<<vp[a[k]].ss<<" "<<vp[a[l]].ss;
				 return;
			}
			else if(a[i]+a[k]+a[l]<sm) k++;
			else l--;
		}
		
	}
	
	 cout<<"IMPOSSIBLE";


}
int main() {
  fast;
  
 // TC
  solve();
  return 0;
}