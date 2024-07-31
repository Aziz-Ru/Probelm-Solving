
int frogJump(int ind,vector<int>v,vector<int> &dp){

    if(ind==1){
        dp[ind]=abs(v[ind]-v[ind-1]);
        return dp[ind];
    }
    if(ind==2){
        dp[ind]=min(abs(v[ind]-v[ind-2]), abs(v[ind]-v[ind-1])+frogJump(ind-1,v,dp));
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    dp[ind]=min(abs(v[ind]-v[ind-1])+frogJump(ind-1,v,dp),abs(v[ind]-v[ind-2])+frogJump(ind-2,v,dp));
    return dp[ind]; 


}

int frogJumpTab(int n,vector<int>v){
    vector<int>dp(n,0);
    

    for(int i=1;i<n;i++){
        int fc=dp[i-1]+abs(v[i]-v[i-1]);
        int sc=INT_MAX;
        if(i>1){
            sc=dp[i-2]+abs(v[i]-v[i-2]);
        }
        dp[i]=min(fc,sc);
    }

    return dp[n-1];
}

int frogJumpSP(int n,vector<int>v){
    int prev1=0,prev2=0;
    for(int i=1;i<n;i++){
        int fc=prev1+abs(v[i]-v[i-1]);
        int sc=INT_MAX;
        if(i>1){
            sc=prev2+abs(v[i]-v[i-2]);
        }
        int cur=min(fc,sc);
        prev2=prev1;
        prev1=cur;
    }

    return prev1;
}

/*

*/
