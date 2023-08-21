#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll siz=2e5+7,Inf=1e9+7;


void solve(){
	int n,q;
	cin>>n>>q;
	ll sm=0;
	vector<int>v(n+2);
	for(int i=1;i<=n;i++) {
		cin>>v[i];
		sm+=v[i];
	}
	set<int>s;
	for(int i=1;i<=n;i++){
		s.insert(i);
	}
	while(q--){
		ll t,a,b,x;
		cin>>t;
		if(t==1){
			cin>>a>>b;
			if(s.count(a)==1){
				sm+=b-v[a];
				v[a]=b;
			}
			else {
				sm+=b-x;
				v[a]=b;
				s.insert(a);
			}
			cout<<sm<<nl;
		}
		else {
			cin>>a;
			sm=a*n;
			x=a;
			cout<<sm<<nl;
			s.clear();
			

		}
	}
	


}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  fast;
  //TC
  solve();
  return 0;
}