#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

/*sort(all(v),[](int a,int b){
   return a>b;
});*/


class DisjointSet{
     vector<int>rank,size,parent;
public:
     DisjointSet(int n){
          rank.resize(n+1,0);
          size.resize(n+1,0);
          parent.resize(n+1,0);
          for(int i=0;i<=n;i++){
               parent[i]=i;
          }
     } 
     int findParent(int node){
          if(node==parent[node])
               return node;
          return parent[node]=findParent(parent[node]);
     }
     void unionByRank(int u,int v){
          int parent_u=findParent(u);
          int parent_v=findParent(v);
          if(parent_u==parent_v){
               return;
          }
          if(rank[parent_u]<rank[parent_v]){
               parent[parent_u]=parent_v;
          }
          else if(rank[parent_u]>rank[parent_v]){
               parent[parent_v]=parent_u;
          }
          else {
               parent[parent_v]=parent_u;
               rank[parent_u]++;
          }
     }
     void unionBySize(int u,int v){
          int parent_u=findParent(u);
          int parent_v=findParent(v); 
          if(size[parent_u]<size[parent_v]){
               parent[parent_u]=parent_v;
               size[parent_v]+=size[parent_u];
          } 
          else{
               parent[parent_v]=parent_u;
               size[parent_u]+=size[parent_v];
          }
     }

};


void silicon(){


  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     int t;
     cin>>t;
     while(t--){
     silicon();
     }
  
  return 0;
}