#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second


int countDays(int days, vector<vector<int>>& meetings) {
        vector<pair<int,int>>vp;
        for(auto x:meetings){
            vp.push_back({x[0],x[1]});
        }
        sort(vp.begin(),vp.end(),[](const pair<int, int>& a, const pair<int, int>& b) {
        if(a.first != b.first) return a.first < b.first;
        return a.second > b.second;
        });
        int end=vp[0].second;
        int ans=0;
        for(int i=1;i<vp.size();i++){
            if(vp[i].first<=end && vp[i].second>end){
                end=vp[i].second;
            }
            else if(vp[i].first>end){
                ans+=vp[i].first-end-1; 
                end=vp[i].second;
            }
            
        }
        for(auto x:vp){
            cout<<x.first<<' '<<x.second<<'\n';
        }
        // cout<<ans<<' ';
        ans+=days-end;
        return ans;
}

void solve(){
    
    vector<vector<int>>v={{6,11},{7,13},{8,9},{5,8},{3,13},{11,13},{1,3},{5,10},{8,13},{3,9}};
    cout<<countDays(14,v);
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