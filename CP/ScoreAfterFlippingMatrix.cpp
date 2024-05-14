#include <bits/stdc++.h>
using namespace std;
# define int long long int 


int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
               if(grid[i][0]==0){
                for(int j=0;j<m;j++){
                    grid[i][j]=(grid[i][j]+1)%2;
                }
               }
            }
            for(int col=1;col<m;col++){
                int cnt=0;
                for(int row=0;row<n;row++){
                    if(grid[row][col]==0) cnt++;
                }
                if(cnt>n/2){
                    for(int row=0;row<n;row++){
                    grid[row][col]=(grid[row][col]+1)%2;
                    }
                }
            }
            // int ans=0;
            for(int i=0;i<n;i++){
                int cnt=0;
                for(int j=m-1;j>=0;j--){
                    ans+=(1<<cnt)*grid[i][j];
                    cnt++;
                }
            }
            cout<<ans;

        return ans;
        
}

void solve(){
    vector<vector<int>>v={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    matrixScore(v);
}


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  
    solve();
   
  return 0;
  
}