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
int n,m;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};
int recur(int i,int j, vector<vector<int>>dp){
  if(i==0&&j==0){
    return 1;
  }
  if(i<0||j<0) return 0;
  if(dp[i][j]!=-1) return dp[i][j];
  int left=recur(i-1,j,dp);
  int up=recur(i,j-1,dp);
  return dp[i][j]=left+up;

}

void solve(){
 cin>>n>>m;
 vector<vector<int>>dp(n,vector<int>(m,-1));
 cout<<recur(n-1,m-1,dp)<<nl;
  
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