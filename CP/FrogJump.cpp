#include <bits/stdc++.h>
using namespace std;
# define int long long int 
int n;
int ans=INT_MAX;
int frogJump(int ind,int sm,vector<int>v,vector<int>&dp){
    if(ind+1==n-1){
        return sm+abs(v[ind]-v[ind+1]);
    }
    if(ind+2==n-1){
        return sm+abs(v[ind]-v[ind+2]);
    }
    if(dp[ind]!=-1) return dp[ind]; 

    // int x=frogJump(ind+1,sm+abs(v[ind]-v[ind+1]),v,dp);

    // int y=frogJump(ind+2,sm+abs(v[ind]-v[ind+2]),v,dp);
    
    dp[ind]=min(frogJump(ind+1,sm+abs(v[ind]-v[ind+1]),v,dp),frogJump(ind+2,sm+abs(v[ind]-v[ind+2]),v,dp));
    return dp[ind];

}

int frogJumpTabulation(vector<int>v,vector<int>&dp){
    dp[0]=0;
    int prev1=0,prev2=0;
    for(int i=1;i<n;i++){
        // int ff=dp[i-1]+abs(v[i]-v[i-1]);
        int ff=prev1+abs(v[i]-v[i-1]);
        int ss=INT_MAX; 
        if(i>1){
            // ss=dp[i-2]+abs(v[i]-v[i-2]);
            ss=prev2+abs(v[i]-v[i-2]);
        }
        dp[i]=min(ff,ss);
        int cur=min(ff,ss);
        prev2=prev1;
        prev1=cur;

    }
    return prev1;
    // return dp[n-1];
}
void solve(){
    cin>>n;
    vector<int>v(n);
    vector<int>dp(n,-1);
    for(int i=0;i<n;i++)cin>>v[i];
    // cout<<frogJump(0,0,v,dp);
    cout<<frogJumpTabulation(v,dp);

    
}


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
  
  return 0;
  
}