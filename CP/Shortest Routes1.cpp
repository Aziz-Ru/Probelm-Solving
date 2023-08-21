#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())

const int siz=2e5+7,Inf=LONG_MAX;

int n,m;

vector<pair<int,int>> gp[siz];
void Dijkstra(int source){
vector<int>dis(siz,Inf);
dis[source]=0;
set<pair<int,int>>s;
s.insert({0,source});
//{wt,vertex}

while(!s.empty()){
  auto x=*(s.begin());
  s.erase(s.begin());
  for(auto it:gp[x.ss]){
    if(dis[x.ss]+it.ss<dis[it.ff]){
      s.erase({dis[it.ff],it.ff});
      dis[it.ff]=dis[x.ss]+it.ss;

      s.insert({dis[it.ff],it.ff});
    }
  }
 }

}


void solve(){
  
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int x,y,wt;
    cin>>x>>y>>wt;
    gp[x].push_back({y,wt});
  }
Dijkstra(1);
   for(int i=1;i<=n;i++){
    cout<<dis[i]<<' ';
  }

}
int32_t main() {
  fast;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  solve();
  // int t;
  // cin>>t;
  // for(int i=1;i<=t;i++){
  // cout<<"Case "<<i<<": ";
  
  // }
  return 0;
}