    int solve(int ind,vector<int> &v,vector<int> &dp){
    if(ind==0){
        return v[ind];
    }
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick=v[ind]+solve(ind-2, v, dp);
    int notpick=solve(ind-1, v, dp);
    dp[ind]=max(pick,notpick);
    return dp[ind];
}
