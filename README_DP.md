## Dynamic Programming


1. Tabulation -> Bottom Up
2. Memoization ->Top-Down



1. Fibonacci Number
0 1 1 2 3 5 8 13 21 ...

### Memoition
```
int fib(int n,vector<int>&dp){
if(n<=1) return n;
if(dp[n] !=-1) return dp[n];
return dp[n]=fib(n-1)+fib(n-2)
}
```

### Tabulation

```
dp[0]=0,dp[1]=1;
for(int i=2;i<=n;i++){
dp[i]=dp[i-1]+dp[i-2];
}
```

### Space Optimization
```
int prev2=0,prev1=1;
for(int i=2;i<=n;i++){
int cur=prev1+prev2
prev2=prev1;
prev1=cur
}
```
