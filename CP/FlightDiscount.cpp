#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

int n,m;
void Dijkstra(long long source,long long dis[],vector<pair<long long,long long>>adj[]){
for(int i=1;i<=n+10;i++) dis[i]=99998500000001;
  long long  vis[100010];
memset(vis,0,sizeof(vis));
dis[source]=0;

priority_queue<pair<long long ,long long >>q;
q.push({0,source});
//{wt,vertex}
while(!q.empty()){
  long long  x=q.top().ss;
  q.pop();
  if(vis[x]) continue;
  vis[x]=1;
  
  for(auto [y,z]:adj[x]){
    if(dis[x]+z<dis[y]){
        dis[y]=dis[x]+z;
        q.push({-dis[y],y});
    }
  }
 }
  
}

void solve(){
 cin>>n>>m;
 vector<pair<long long ,long long>> adj1[n+1],adj2[n+1];
 vector<tuple<long long,long long, long long>>e;
 long long  dist1[100015],dist2[100015];
 for(int i=0;i<m;i++){
    int x,y,z;
    cin>>x>>y>>z;
    e.push_back({x,y,z});
    adj1[x].push_back({y,z});
    adj2[y].push_back({x,z});

    
 }

 Dijkstra(1,dist1,adj1);
 Dijkstra(n,dist2,adj2);
// for(int i=1;i<=n;i++){
//   if(dist2[i]<0) break;
//   cout<<dist2[i]<<' '<<i<<nl;
// }
long long  ans=99998500000005;
for(auto [x,y,z]:e){
  long long p=dist1[x]+dist2[y]+z/2;
  ans=min(ans,p);
}
cout<<ans;
}

int32_t main() {
  Fast;
  solve();
  
  return 0;
}