
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
	ll x,y;
	cin>>x>>y;
	if(x==y){
		cout<<(x)*(x-1)+1<<nl;
	}
	else if(x>y){
		if(x%2==0){
			cout<<x*x-(y-1)<<nl;
		}
		else {
			cout<<(x-1)*(x-1)+y<<nl;
		}
	}
	else {
		if(y%2==1){
			cout<<y*y-(x-1)<<nl;
		}
		else cout<<(y-1)*(y-1)+(x)<<nl;
	}
	
	
}

int main() {
  fast;
  TC
  solve();
  return 0;
}