#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())

const int siz=2e5+7,Inf=1e9+7;

vector<int>g[siz];
int depth[siz],height[siz];
void dfs(int vertex,int par){

  for(int child:g[vertex]){
  if(child==par) continue;
   depth[child]=depth[vertex]+1;
    dfs(child,vertex);
    //height[vertex]=max(height[vertex],height[child]+1);
  }
}

void solve(){

int n,m;
 cin>>n;
 for(int i=0;i<n-1;i++){
  int x,y; 
  cin>>x>>y;
  g[x].pb(y);
  g[y].pb(x);
 }
dfs(1,0);
int mx=-1,mnnode; 
 for(int i=1;i<=n;i++){
    if(mx<depth[i]){
      mx=depth[i];
      mnnode=i;
    }
    depth[i]=0;
 }
dfs(mnnode,0);
mx=-1;
for(int i=1;i<=n;i++) mx=max(depth[i],mx);
  cout<<mx<<nl;

  

 

}
int32_t main() {
  fast;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
 // TC
  solve();
  return 0;
}