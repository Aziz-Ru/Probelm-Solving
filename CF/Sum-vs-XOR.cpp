#include <bits/stdc++.h>
using namespace std;


vector<int> int_to_bin(long long n){
    vector<int>v;
    while(n){
        if(n&1)v.push_back(1); 
        else  v.push_back(0); 
        n/=2;
    }
    reverse(v.begin(),v.end());
    return v;
}

void solve(){
    long long n; cin>>n;
    vector<int>nums=int_to_bin(n);
    long long ans=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            ans*=2;
        }
    }
    cout<<ans<<'\n';
    
    
}


int main() {

  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t; 
  while(t--){
    solve();
  }   
  return 0;
  
}