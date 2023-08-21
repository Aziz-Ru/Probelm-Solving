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
int parent[siz];
void dfs(int vertex,int par=-1){
  parent[vertex]=par;//store parent
  for(int child:g[vertex]){
  if(child==par) continue;
    dfs(child,vertex);
    
  }
}
vector<int> path(int v){
  vector<int>ans;//which returns v all parent
  while(v!=-1){
    ans.push_back(v);
    v=parent[v];
  }
  reverse(all(ans));
  return ans;
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
dfs(1);
int x, y; cin>>x>>y;
vector<int>v1=path(x);
vector<int>v2=path(y);
int mn=min(v1.size(),v2.size());
int lca;
for(int i=0;i<mn;i++){
  if(v1[i]==v2[i]){
    lca=v1[i];
  }
  else break;
}
cout<<lca<<nl;

  

 

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