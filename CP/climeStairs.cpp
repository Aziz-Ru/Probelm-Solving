#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

int count_min(int ind,vector<int>&heights,vector<int>&dp,int k){
	if(ind==0) return 0;
	if(dp[ind]!=-1) return dp[ind];
	int right=INT_MAX;

	int left =count_min(ind-1,heights,dp,k)+abs(heights[ind]-heights[ind-1]);
	for(int i=1;i<=k;i++){
		if(ind-i>=0){
		right=count_min(ind-i,heights,dp,k)+abs(heights[ind]-heights[ind-i]);
		}
		//when frog can jump i,i+1,i+2,i+3,...i+k
	}
	return dp[ind]=min(left,right);
}

void solve(){
 
  int n,k=2; cin>>n;
  vector<int>v(n);
  vector<int>dp(n,-1);
  for(int i=0;i<n;i++)cin>>v[i];
  int ans=count_min(n-1,v,dp,k);
cout<<ans<<nl;

}

int32_t main() {
  Fast;
  int t; cin>>t;
  while(t--)
  solve();
  
  return 0;
}