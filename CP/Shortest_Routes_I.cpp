#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) (x.size())
const int siz=2e5+7,Inf=LONG_MAX;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};
 
int INF=LONG_MAX;

int n,m;
//number of nodes and vertex
int path[200000];
//this path array for path
vector<int> distnce(200000,INF);
//all distance infinte
vector<pair<int,int>> graph[siz];
//this is graph
 
void Dijkstra(int source){
 
distnce[source]=0;
path[source]=-1;
set<pair<int,int>>my_set;
my_set.insert({0,source});
//set insert way {wt,vertex}
 
while(!my_set.empty()){

  auto start=*(my_set.begin());
  int src=start.ss;
  int srt_wt=start.ff;
  //set begin element nia nelam
  my_set.erase(my_set.begin());
  // ser er begin element remove krlam
 
  for(auto it:graph[src]){
    int child=it.ff;
    int child_wt=it.ss;
 
 
    if(distnce[src]+child_wt<distnce[child]){
      // jodi distance of srt+child weght <distance child
      //then we remove it and insert in our set new value and this child
 
      my_set.erase({distnce[child],child});
      //set ager weight ta remove krlam
      distnce[child]=distnce[src]+child_wt;
      //new distance of this child
      my_set.insert({distnce[child],child});
      //insert krlam new distance and child
      path[child]=src;
    }
 
  }
 }
 
}

//to find shortes path of any node
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


//reset the graph
void reset_Graph(){
  for(int i=0;i<=n;i++){
    distnce[i]=INT_MAX,path[i]=0;
    graph[i].clear();
  }
}



void solve(){
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int x,y,wt;
    cin>>x>>y>>wt;
    //way of push child and {child, weight}
    graph[x].push_back({y,wt});
  }

Dijkstra(1);
 
  for (int i = 1; i <=n; ++i)
  {
   cout<<distnce[i]<<' ';
  }
 
 
}
 
  
int32_t main() {
  Fast;
  solve();
  return 0;
}