#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int


int32_t main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
      int base,pow;
         cin>>base>>pow;
        int ans=1;
        while (pow) {
             if(pow&1) ans=ans*base%10;
             base=base*base%10;
             pow/=2;
        }
      cout<<ans<<'\n';
  }
  return 0;
}