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
int a[30];
void solve(){

string s; cin>>s;
set<char> sc;
for(int i=0;i<sz(s);i++){
	sc.insert(s[i]);
}
set<char>sq;
for(int i=0;i<sz(sc);i++)
sq.insert(s[i]);
if(sz(sq)!=sz(sc))
{
	cout<<"NO"<<nl;
	return;
}
for(int i=sz(sc);i<sz(s);i++){
	if(s[i]!=s[i-sz(sc)]){
		cout<<"NO"<<nl;
		return;
	}
}
cout<<"YES"<<nl;


}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  fast;
  TC
  solve();
  return 0;
}