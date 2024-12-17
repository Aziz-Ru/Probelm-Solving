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
set<string>sp;
void permute(string s, string ans){
	if(sz(s)==0){
		sp.insert(ans);
		return;
	}
	for(int i=0;i<sz(s);i++){
		char ch=s[i];
		string le=s.substr(0,i);
		string r=s.substr(i+1);
		string p=le+r;
		permute(p,ans+ch);
	}
}
void solve(){
	string s,ans="";
	cin>>s;
	permute(s,ans);
	cout<<sp.size()<<nl;
for(auto x:sp) cout<<x<<nl;
	
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