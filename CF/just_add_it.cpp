#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
int M=10000007;
long long binpow(long long base,long long pow){
      long long ans=1;
      while (pow){
      if(pow&1) ans=ans*1LL*base%M;
       base=base*1LL*base%M;
       pow/=2;
      }
    return ans;
}
  
int32_t main() {
  Fast;
  long long  n,k;
  while(cin>>n>>k){
    if(n==0&&k==0) break;
    //n^k+n^n+2((n-1)^k+(n-1)^n)
     cout<<((binpow(n,k)%M+binpow(n,n)%M)%M+(2*(binpow(n-1,k)%M+binpow(n-1,n-1)%M)%M))%M<<'\n';
     
  }
  return 0;
}