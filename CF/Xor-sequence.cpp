#include <bits/stdc++.h>
using namespace std;


// https://www.hackerrank.com/challenges/xor-se/problem

/*
You will be given a left and right index . You must determine the XOR sum of the segment of  as .
0 0^1 1^2 3^3 4^0 ......

*/

long xorSequence(long l, long r) {
// long long l,r;
    // cin>>l>>r;
    long long p=l,q=r,xorVal=0;
    if(l%4==1){
        xorVal^=(l+1);
        l+=2;
    }
    else if(l%4==2){
        l+=1;
        xorVal^=l;
        
    }
    else if(l%4==0){
         l+=3;
         xorVal^=2;
    }
     if(r%4==0){
        xorVal^=r;
         r-=1;
       
    }
    else if(r%4==1){
        xorVal^=r;
        r-=2;
        
    }
    else if(r%4==2){
        xorVal^=2;
        r-=3;
    }
    
    long long cnt=(r-l)/4;
    if(cnt&1)xorVal^=2;
    return xorVal;

}

void solve(){
    int n,m;
    cin>>n>>m;
    cout<<xorSequence(n,m)<<'\n';
    

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