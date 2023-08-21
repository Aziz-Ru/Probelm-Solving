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
ll n,k;
cin>>n>>k;
if(n==1) {
	cout<<0<<nl;
	return;
}
if(k==1){
	cout<<n-1<<nl;
	return;
}
if(n==k){
	if(n&1) cout<<n/2+1<<nl;
	else cout<<n/2<<nl;
	return;
}


if(n<k){
	ll p=1,sm=0,cnt=0;
for(int i=0;i<63;i++){
  int q=p<<i;
  if(sm+q<=n){
  	sm+=q;
  	cnt++;
  	cout<<q<<" ";
  }
  else break;
}
if(sm!=n) cnt++;
cout<<cnt<<nl;

}
else{
	ll p=1,sm=1,cnt=0;
	n--;
	for(int i=0;i<63;i++){
  int q=p<<i;
  if(sm+q<=k){
  	n-=q;
  	cnt++;
  	//cout<<q<<" ";
  }
  else break;
}
cnt+=(n+k-1)/k;
cout<<cnt<<" "<<nl;
}

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