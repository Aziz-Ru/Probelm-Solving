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

	int a[n+1];
	vector<vector<int>>v(n+1,vector<int>());
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		a[i]=x;
		v[x].pb(i);
	}
	if(n==1){
		cout<<1<<nl;
		return;
	}
	int cnt[n+1]={0};
	for(int i=1;i<=n;i++){
		if(v[i].size()==1){
			cnt[i]=1;
			continue;
		}
	
	else if(v[i].size()>1){
		cnt[i]=1;
	for(int j=0;j<v[i].size();j++){
		if(j+1<v[i].size()&&((v[i][j+1]-v[i][j])%2==1)){
			
			cnt[i]++;
	        
	   }
	
	}
 }
}
	
	
	for(int i=1;i<=n;i++){
			cout<<cnt[i]<<" ";
	}
	cout<<nl;

}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}