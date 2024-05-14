#include <bits/stdc++.h>
using namespace std;

long flippingBits(long n) {
    long ans=1;
    for(int i=0;i<32;i++){
        ans*=2;
    }
    ans-=1;
    return ans^n;
}

void solve(){
   long n;
   cin>>n;
   cout<<flippingBits(n)<<'\n'; 
}


int main() {
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