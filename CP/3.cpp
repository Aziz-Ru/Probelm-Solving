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
const int siz=2e5+7,Inf=1e16;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};
int dist[501][501];

void solve(){
  int n,m,q;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i==j)dist[i][j]=0;
        else dist[i][j]=Inf;
  
      }
    }
  
    for(int i=1;i<=m;i++){
      int x,y,wt;
      cin>>x>>y>>wt;
      dist[x][y]=min(wt,dist[x][y]);
      dist[y][x]=min(wt,dist[y][x]);
    }
    for(int k=1;k<=n;k++){
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        }
      }
    }
    while(q--){
      int x,y;
      cin>>x>>y;
      if(dist[x][y]!=Inf) cout<<dist[x][y]<<nl;
      else cout<<"-1"<<nl;
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