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
	int n,s; 
	cin>>n>>s;
	int a[n+7];
	for(int i=1;i<=n;i++)cin>>a[i];

	int mx=-1,sum=0,pos=1;

	for(int i=1;i<=n;i++){
		sum+=a[i];
		while(sum>s){
			sum-=a[pos];
			pos++;
		}
		if(s==sum){
			mx=max(mx,i-pos+1);
		}
	}
	if(mx==-1) cout<<"-1"<<nl;
	else cout<<n-mx<<nl;
		



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