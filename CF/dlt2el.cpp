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
ll n; cin>>n;
vector<int>vp;
ll avg=0;
map<ll,ll>mp;

for(int i=0;i<n;i++){
int x; cin>>x;
avg+=x;
vp.push_back(x);
mp[x]++;

}
if(mp.size()==1){
	cout<<(n*(n-1))/2<<nl;
	return;
}
if(2*avg%n!=0){
	cout<<0<<nl;
	return;
}

ll req=(2*avg)/n;
//cout<<req<<nl;
ll cnt=0;
for(int i=0;i<n;i++){
 ll a=vp[i];
ll b=req-a;
if(mp.count(b)) cnt+=mp[b];
if(a==b) cnt-=1;
}
cout<<cnt/2<<nl;

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