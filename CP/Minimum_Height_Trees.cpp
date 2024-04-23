#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl " \n"
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

void findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // degree of every nodes
        vector<int> degree(n, 0);
        // graph list
        vector<int>list[n];
        vector<int>ans;
        if(n==1){
         ans.push_back(0);
         return ;
        }

        // insert node in graph and update degree
        for (auto edge : edges) {
            degree[edge[0]]++;
            degree[edge[1]]++;
            list[edge[0]].push_back(edge[1]);
            list[edge[1]].push_back(edge[0]);
        }
        // BFS
        queue<int>q;
        // insert leaf node in queue
        for(int i=0;i<n;i++){
         if(degree[i]==1) q.push(i);
         }

         while(n>2){
            // remove leaf node from graph
            int size=q.size();
            n-=size;
            // decreasing degree of it parent node
            for(int i=0;i<size;i++){
               int x=q.front();
               q.pop();
               for(int i:list[x]){
                  degree[i]--;
                  // if parent degree is one then it add queue
                  if(degree[i]==1){
                     q.push(i);
                  }
               }
            }
         }
         while(!q.empty()){
            ans.push_back(q.front()); 
         q.pop();
         }
         
         for(auto x:ans) cout<<x<<' ';
        
    }

void silicon(){

   vector<vector<int>>v={{1,0},{1,2},{1,3}};
   findMinHeightTrees(4,v);

  
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