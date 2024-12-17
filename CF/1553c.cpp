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
	string s,p;
	cin>>s;
	int a=0,b=0;
	for(int i=0;i<10;i++){
	if(i&1&&s[i]!='1'||i%2==0&&s[i]!='0')
		a++;
	if(i&1&&s[i]!='0'||i%2==0&&s[i]!='1') b++;
	if(a==6||b==6||i==9){
		cout<<i+1<<nl;
		return;
	}
}
	



	
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