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
int recursion(int ind,vector<int>&v,vector<int>&dp){
	if(ind==0) return v[ind];
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];

    int pick=v[ind]+recursion(ind-2,v,dp);
    int non_pick=recursion(ind-1,v,dp);
    //pick not pick i th index or i-1 index
    return dp[ind]=max(pick,non_pick);
}

void solve(){
 int n; cin>>n;
 vector<int>v1;
 vector<int>v2;
 vector<int>dp1(n,-1);
 vector<int>dp2(n,-1);

 for(int i=0;i<n;i++) {
 	int x;
 	 cin>>x;
 	if(i!=0) v1.push_back(x);
 	if(i!=n-1) v2.push_back(x);
 }
 	//memoization
 cout<<max(recursion(n-2,v1,dp1),recursion(n-2,v2,dp2))<<' ';
//tabulation method for 
// int prev=v[0];
// int prev1=0;
// for(int i=1;i<n;i++){
// int take=v[i];
// if(i>1) take+=prev1;
// int notTake=prev;
// int curr=max(take,notTake);
// prev1=prev;
// prev=curr;

// }


  
}

int32_t main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
  	//cout<<"Case "<<i<<':';
  	solve();
  }
  return 0;
}