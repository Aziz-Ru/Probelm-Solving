#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define int long long int
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

 bool is_valid(int i,int j,int n,int m,vector<vector<int>>& grid){
    return (i>=0&&i<n&&j>=0&&j<m&&grid[i][j]==0);
    }

    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid){
        grid[i][j]=1;
        for(auto dir:direction){
            int nx=dir.first+i;
            int ny=dir.second+j;
            if(is_valid(nx,ny,n,m,grid)){
                dfs(nx,ny,n,m,grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int ans=0,cnt=0;
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i*j==0||i==n-1||j==m-1)&&grid[i][j]==0){
                    cnt++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j]<<' ';
            }
            cout<<nl;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    ans++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
       // cout<<cnt<<' ';
        return ans;
        
    }



void solve(){
vector<vector<int>> grid;
for(int i=0;i<5;i++){
    vector<int>v;
    for(int j=0;j<8;j++){
        int x; cin>>x;
        v.push_back(x);
    }
    grid.push_back(v);
}
cout<<closedIsland(grid);


}

int32_t main() {
  Fast;
    solve();
  
  return 0;
}