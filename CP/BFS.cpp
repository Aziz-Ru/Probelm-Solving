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
#define sz(x) (x.size())
const int siz=10000,Inf=1e9+7;

int vis[siz];
int level[siz];

vector<int>gp[siz];
void bfs(int source){
  queue<int> q;
  q.push(source);
  vis[source]=1;
  while(!q.empty()){
    int cur=q.front();
    q.pop();
    for(int child:gp[cur]){
      if(!vis[child]){
        q.push(child);
        vis[child]=1;
        level[child]=level[cur]+1;
      }
    }
  }
}
void solve(){
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
  int x,y;
  cin>>x>>y;
  gp[x].push_back(y);
  gp[y].push_back(x);
 }
 bfs(1);
 for(int i=1;i<=n;i++){
  cout<<level[i]<<' ';
 }
  
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  //TC
  solve();
  return 0;
}