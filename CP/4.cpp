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

void silicon(){
    unordered_map<string,int>cnt;
    int n;
    cin>>n; 

    for(int i=0;i<n;i++){
        string s;
        cin>>s; 
        if(s.size()==1){
            cnt[s]++;
        }
        else{
        string p="";
        p+=s[0];
        cnt[p]++;
        cnt[s]++;
        // cout<<cnt["j"];
        }
        
    }

    int m; cin>>m; 
    while(m--){
        string ch;
        cin>>ch; 
        // cout<<ch<<" ";
        cout<<cnt[ch]<<endl;
    }

  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     silicon();
     
  
  return 0;
}
int n,m;
int vis[1001][1001];

bool is_valid(int a,int b){
  return (a>=0&&b>=0&&a<n&&b<m&& !vis[a][b]);
}
void Bfs_Grid(int a,int b){

queue<pair<int,int>> q;
q.push({a,b});
vis[a][b]=1;
while(!q.empty()){
   auto x=q.front();
   q.pop();

   for(auto dir:direction){

     int new_row=dir.ff+x.ff;
     int new_col=dir.ss+x.ss;

     if(is_valid(new_row,new_col)){
      vis[new_row][new_col]=1;

      q.push({new_row,new_col});

     }
    }

  }
}