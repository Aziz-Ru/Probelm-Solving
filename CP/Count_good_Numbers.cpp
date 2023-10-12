#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define int long long int

  int M=1e9+7;
    long long  binpow(long long base,long long pow){

        base%=M;
        long long ans=1;
        while(pow){
            if(pow&1){
                ans=(ans%M*base%M)%M;
            }
            base=1LL*(base%M*base%M)%M;
            pow/=2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n/2+n%2;
        int result=(binpow(5,even)%M*binpow(4,odd)%M)%M;

        return result;
    }
    
int32_t main() {
  Fast;
  int n; cin>>n;
  cout<<countGoodNumbers(n);
  return 0;
}