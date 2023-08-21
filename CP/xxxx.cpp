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
int n,x;
cin>>n>>x;
int a[n],fr[n],lr[n],mx=0,sm=0;
for(int i=0;i<n;i++) {
	cin>>a[i];
    sm+=a[i];
	fr[i]=sm%x;
}
if(fr[n-1]!=0){
	cout<<n<<nl;
	return;
}
sm=0;
for(int i=n-1;i>=0;i--){
   sm+=a[i];
   lr[i]=sm%x;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}
for(int i=0;i<n;i++){
	if(fr[i]>0){
		mx=max(mx,i+1);
	}
	if(lr[i]>0){
		mx=max(mx,n-i);
	}
}

if(mx>0)cout<<mx<<nl;
else cout<<"-1"<<nl;


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