#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())
const int siz=2e5+7,Inf=1e9+7;

void solve(){
  int n,m; cin>>n>>m; 

  vector<int>v[n+1];
  for(int i=1;i<=m;i++){
    int x,y;
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
  }
 int p,q;
  for(int i=1;i<=n;i++){
      if(v[i].size()!=1){
       bool ok=true;
      for(auto x:v[i]){
        if(v[x].size()==1){
          p=i;
          ok=false;
          break;
        }
      }
      if(ok) q=i;
      
    }
 }
 cout<<v[q].size()<<' '<<v[p].size()-1<<' '<<nl; 

}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  TC
  solve();
  return 0;
}