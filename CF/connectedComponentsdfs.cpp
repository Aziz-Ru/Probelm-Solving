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

vector<int>grap[siz];
vector<vector<int>>cc;
vector<int>current_cc;
bool vis[siz];
void dfs(int vertex){

  if(vis[vertex])return ;
  current_cc.pb(vertex);
  vis[vertex]=true;
  for(int child:grap[vertex]){
    // cout<<"par "<<vertex<<' '<<"child"<<child<<nl;
    dfs(child);
  }
}

void solve(){
int n,m;
 cin>>n>>m;
 for(int i=0;i<m;i++){
  int x,y; 
  cin>>x>>y;
  grap[x].pb(y);
  grap[y].pb(x);
 }


 for(int i=1;i<=n;i++){
  if(vis[i]) continue;
  current_cc.clear();
  dfs(i);
  cc.pb(current_cc);
  
 }
 cout<<cc.size()<<nl;
 for(auto c_cc:cc){
  for(auto ver:c_cc) cout<<ver<<' ';
    cout<<nl;
 }
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