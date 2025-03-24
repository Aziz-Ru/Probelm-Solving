/*
To calculate total number of ways climb stairs we observe that when we are ith stair ,we have two choice 
1. either we can climb n+1 stair or
2. we can climb n+2 stair

that is like fibonqqi series



*/

class Solution {
public:
    int f(int n,vector<int>&dp){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        dp[n]=f(n-1,dp)+f(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};
