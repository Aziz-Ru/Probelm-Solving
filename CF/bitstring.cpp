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
string s(5,'d');
void solve(){
	int n,k; cin>>n>>k;
	int odd=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]&1) odd++;
	
	}
	if(odd<k) {
		cout<<"NO"<<nl;
		return;
	}
	// if(k==1&&odd&1){
	// 	cout<<"YES"<<nl;
	// 	cout<<1<<" "<<n<<nl;
	// 	return;
	// }
	if((odd-(k-1))%2==0){
		cout<<"NO"<<nl;
		return;
	}
	else{
		cout<<"YES"<<nl;
		int cnt=0,i;
		for(int j=0;j<n;j++){
			if(cnt==k-1) {
				break;
			}
			if(a[j]&1){
				cnt++;
				cout<<j+1<<" ";

			}
		}
		cout<<n<<nl;

		

		
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