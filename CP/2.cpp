#include <bits/stdc++.h>
using namespace std;
# define int long long int 

void solve(){
    int n;
    cin>>n; 
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        int x; cin>>x; 
        v[x]=i+1;
    }

    for (int phase = 1; phase <= n; ++phase) {
        swaps = 0;
        int target, targetIndex;

    }

}


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
  
  return 0;
  
}