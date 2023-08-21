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

bool subset_sum(int ind,int target,vector<int>&v,vector<vector<int>> &dp){
  if(target==0) return true;
  if(ind==0){
    return target==v[ind];
  }
  if(dp[ind][target]!=-1) return dp[ind][target];
  bool notTake=subset_sum(ind-1,target,v,dp);
  bool take=false;
    if(target>=v[ind]){
      take=subset_sum(ind-1,target-v[ind],v,dp);
  }
  return dp[ind][target]=take|notTake;
}

void solve(){
 
  
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