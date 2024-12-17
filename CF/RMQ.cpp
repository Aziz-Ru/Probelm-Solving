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

const int MAX_N=200005;
const int LOG=31;
int m[MAX_N][LOG];
int bin_log[MAX_N];
int query(int l,int r){
	int len=r-l+1;
	int k=bin_log[len];
	
	return max(m[l][k],m[r-(1<<k)+1][k]);
}
void sparsh(int a[],int n){
	bin_log[1]=0;
	for(int i=2;i<=n;i++){
		bin_log[i]=bin_log[i/2]+1;  
		//cout<<bin_log[i]<<" "; 1,2 4,8,16
	}
	for(int i=0;i<n;i++) {
		m[i][0]=a[i];
	 }
	for(int k=1;k<LOG;k++){
		for(int i=0;i+(1<<k)-1<n;i++){
			m[i][k]=max(m[i][k-1],m[i+(1<<(k-1))][k-1]);	
		}
    }
}
void solve(){
	ll n, q;
	cin>>n>>q;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	sparsh(a,n);
	while(q--){
		int l,r; cin>>l>>r;
		l--,r--;
		cout<<query(l,r)<<nl;
	}


	

}
int main() {
  fast;
  solve();
  return 0;
}