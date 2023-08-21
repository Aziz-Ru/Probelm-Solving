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
const int siz=2e5+7,Inf=1e9+7;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

int n,m;
int path[siz];
int val[siz];
vector<int>dist(siz,Inf);
vector<pair<int,int>> gp[siz];
void Dijkstra(int source){
val[source]=0;
dist[source]=0;
path[source]=-1;
set<pair<int,int>>s;
s.insert({0,source});
//{wt,vertex}

while(!s.empty()){
  auto x=*(s.begin());
  s.erase(s.begin());
  for(auto it:gp[x.ss]){
    if(dist[x.ss]+it.ss<dist[it.ff]){
      path[it.ff]=x.ss;

      s.erase({dist[it.ff],it.ff});
      dist[it.ff]=dist[x.ss]+it.ss;
      val[it.ff]=(dist[it.ff]-dist[x.ss]);
      s.insert({dist[it.ff],it.ff});
    }
  }
 }

}
vector<int> Path(int x){
   vector<int>ans;
   ans.push_back(x);
   while(path[x]!=-1){
   ans.push_back(path[x]);
   x=path[x];
   
  }
  reverse(all(ans));
 return ans;
}
void reset_Graph(){
  for(int i=0;i<=n;i++){
    dist[i]=Inf,path[i]=0;
    gp[i].clear();
  }
}
void solve(){
cin>>n>>m;
for(int i=0;i<m;i++){
  int x,y,wt;
  cin>>x>>y>>wt;
  gp[x].push_back({y,wt});
  gp[y].push_back({x,wt});
}
int q;
cin>>q;
Dijkstra(q);
for(int i=0;i<n;i++){
  cout<<val[i]<<' ';
}
cout<<nl;
reset_Graph();
  
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