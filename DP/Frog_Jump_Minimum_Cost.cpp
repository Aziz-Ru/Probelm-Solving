#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second


int frogJumpMinimumHealth(int ind,vector<int> &heights,vector<int> &dp){
    if(ind==0){
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int left=frogJumpMinimumHealth(ind-1,heights,dp)+abs(heights[ind]-heights[ind-1]);
    int right=INT_MAX; 
    if(ind>1){
        right=frogJumpMinimumHealth(ind-2,heights,dp)+abs(heights[ind]-heights[ind-2]);
    }
    return dp[ind]=min(left,right);
    
}


void solve(){
    vector<int>v={20,10,20,30};
    vector<int>d(10,-1);
    cout<<frogJumpMinimumHealth(3,v,d);

    vector<int>dp(10,0);
    dp[0]=0; 
    for(int i=1;i<4;i++){
        int fs=dp[i-1]+abs(v[i]-v[i-1]);
        int ss=INT_MAX;
        if(ss>1){
            ss=dp[i-2]+abs(v[i]-v[i-2]);
        }
        dp[i]=min(fs,ss);
    }
    cout<<dp[3];
}


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t; 
  while(t--){
    solve();
  }   
  return 0;
  
}