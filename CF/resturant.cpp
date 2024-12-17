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
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	for(int i=0;i<n;i++){
		int x; cin>>x;
		v[i]=x-v[i];
	}
	sort(all(v));
	int ans=0,i=0,j=n-1;
	while(i<j){
		if(v[i]+v[j]>=0){
			i++;
			j--;
			ans++;
		}
		else i++;
	}
	cout<<ans<<nl;
    // #ifndef ONLINE_JUDGE
    //  cout<< "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    // #endif
}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}