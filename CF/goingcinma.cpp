#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(all(v));
  int ans=0;
  for(int i=0;i<n;i++){

    if(v[i]>i&&(i==0||v[i-1]<=i-1)) ans++;
  }
  cout<<ans+1<<nl;
    #ifndef ONLINE_JUDGE
     cout<< "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}