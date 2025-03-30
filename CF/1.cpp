#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second

int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), sum = 0, k = 0;
        vector<int> diff(n + 1);

        for(int i=0;i<n;i++){
            while(sum+diff[i]<nums[i]){
                k++;
                if(k>queries.size())return -1;
                int left=queries[k-1][0],right=queries[k-1][1],val=queries[k-1][2];
                
                if(right>=i){
                    diff[max(i,left)]+=val;
                    diff[right+1]-=val;
                }
                

            }
            for(int i=0;i<=n;i++){
                cout<<diff[i]<<' ';
            }
            cout<<'\n';
            sum+=diff[i];
        }

        return k;
    }


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  

  vector<int>v={2,0,2}; 
  vector<vector<int>> q={{0,2,1},{0,2,1},{1,1,3}};
  cout<<minZeroArray(v,q);
  return 0;
  
}