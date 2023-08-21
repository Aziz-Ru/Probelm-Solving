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
	string s; 
	cin>>s;
	ll sm=0,mx=0;
	for(int i=0;i<n;i++){
		if(s[i]=='L')sm+=i;	
		else sm+=n-1-i;
	
	}
	vector<ll>v;
	for(int i=0,j=n-1;i<j;i++,j--){
		if(s[i]=='L'&&s[j]=='R'){
			sm-=i;
			sm+=n-1-i;
			v.push_back(sm);
			sm-=n-1-j;
			sm+=j;
			v.push_back(sm);
		}
		else if(s[i]=='L'&&s[j]=='L'){
			sm-=i;
			sm+=n-1-i;
			v.push_back(sm);
		}
		else if(s[i]=='R'&&s[j]=='R'){
			sm+=j;
			sm-=n-1-j;
			v.push_back(sm);
		}
		mx=max(mx,sm);

	}
	for(auto x:v) cout<<x<<" ";
	int p=v.size();
    for(int i=0;i<n-p;i++) cout<<mx<<" ";
		cout<<nl;

}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}