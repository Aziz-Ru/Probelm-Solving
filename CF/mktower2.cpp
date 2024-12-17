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
	int a[n+2]={0},cnt[n+2]={0};
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		if(a[x]==0||(i-a[x])%2==1){
			cnt[x]++;
			a[x]=i;
		}
	}
	for(int i=1;i<=n;i++)
		cout<<cnt[i]<<" ";
	cout<<nl;
}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}