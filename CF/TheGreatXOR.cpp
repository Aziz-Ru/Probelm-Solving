#include <bits/stdc++.h>
using namespace std;

 vector<int> int_to_bin(long x){
     vector<int>bin;
     while(x){
         if(x&1)bin.push_back(1);
         else bin.push_back(0);
         x/=2;
     }
     return bin;
 }

long theGreatXor(long x) {
    long ans=0,cnt=1;
    vector<int>bin=int_to_bin(x);
    for(int i=0;i<bin.size();i++){
        if(bin[i]==0){
            ans+=cnt;
        }
        cnt*=2;
    }
    return ans;
    
}

void solve(){
    
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