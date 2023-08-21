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
	int n; cin>>n;
	string s; cin>>s;
	if(n==1) cout<<"YES"<<nl;
	else{
		set<char>sc;
		for(char c:s){
			sc.insert(c);
		}
	
		if(sc.size()==1) cout<<"NO"<<nl;

		else{
			int a[n];
			memset(a,-1,sizeof(a));
			for(int i=0;i<n;i++){
				if(a[i]==0||a[i]==1) continue;
				else if(i&1){
					for(int j=i;j<n;j++){
						if(s[i]==s[j]){
							a[j]=1;
							//cout<<s[j]<<" "<<j<<nl;
						}

					}
				

				}
				else {
					for(int j=i;j<n;j++){
						if(s[i]==s[j]) a[j]=0;
					}
					//cout<<s<<" "<<nl;
				}
				
			}
			//cout<<s<<" ";
			for(int i=0;i<n-1;i++){
			    if(a[i]==a[i+1]){
			    	cout<<"NO"<<nl;
			    	return;
			    }
			}
			cout<<"YES"<<nl;
		}
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