#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second


long long findScore(vector<int>& nums) {
        long long ans=0;
        multimap<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
        vector<bool> removes(nums.size(),false);

        for(auto x:mp){
            if(removes[x.ss]) continue;
            ans+=x.ff;
            // cout<<x.ff<<'\n';
            removes[x.ss]=true;
            if(x.ss+1<nums.size())removes[x.ss+1]=true;
            if(x.ss-1>=0) removes[x.ss-1]=true;
            // cout<<x.ss-1<<' '<<x.ss<<' '<<x.ss+1<<'\n';
    
        }
        return ans;
}

void solve(){
    vector<int>v={2,1,3,4,5,2};
    cout<<findScore(v);
}


int32_t main() {
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