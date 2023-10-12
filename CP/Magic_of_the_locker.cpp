#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
int M=1e9+7;
long long binpow(long long base,long long pow){
      long long ans=1;
      while (pow){
      if(pow&1) ans=ans*base%M;
       base=base*base%M;
       pow/=2;
      }
    return ans;
}
  
int32_t main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
     long long n;
     cin>>n;
     if(n<4) cout<<n<<'\n';
     else if(n%3==0){
        cout<<binpow(3,n/3)%M<<'\n';
     }
     else if(n%3==1){
        long long m=n-4;
        cout<<(binpow(3,m/3)%M*4)%M<<'\n';
     }
     else {
        cout<<(binpow(3,n/3)%M*2)%M<<'\n';
     }
  }
  return 0;
}