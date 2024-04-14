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
  
class Subset{

public:

      bool sum_equal_To_K(int ind,int target,vector<int>&v,vector<vector<int>>&dp){
         if(target==0) return true;
         if(ind==0) return (target==v[ind]);
         if(dp[ind][target]!=-1) return dp[ind][target];
         bool notTake=sum_equal_To_K(ind-1,target,v,dp);
         bool Take=false;
         if(v[ind]<=target){
            Take=sum_equal_To_K(ind-1,target-v[ind],v,dp);
         }
         return dp[ind][target]=notTake|Take;
        }
      bool sum_equal_To_K2(int n,int k,vector<int>v){
         vector<vector<bool>> dp(n,vector<bool>(k+1,0));
         for(int i=0;i<n;i++) dp[i][0]=true;
         dp[0][v[0]]=true;
         for(int ind=1;ind<n;ind++){

            for(int target=1;target<=k;target++){
               bool notTake=dp[ind-1][target];
               bool Take=false;
               if(v[0]<=target){
                  Take=dp[ind-1][target-v[ind]];
               }
               dp[ind][target]=notTake|Take;
            }
         }
      return dp[n-1][k];
      }
      
      int maxSubArraySum(vector<int>nums_array){   
         int size=nums_array.size();
         int result = INT_MIN, current_sum = 0;
         for (int i = 0; i < size; i++) {
            current_sum += nums_array[i];
            result=max(result,current_sum);
            if (current_sum < 0)
            current_sum = 0;
         }
         return result;
      }


      
      int numberOf_Subarray_Sum_Equal_K(vector<int>&v, int k){
         map<int,int>All_sum;
         int current_sum=0,ans=0; 
         int n=v.size();
         for(int i=0;i<n;i++){
            current_sum+=v[i];
            if(current_sum==k) ans++;
            if(All_sum.find(current_sum-k)!=All_sum.end()){
               ans+=All_sum[current_sum-k];
            }
            All_sum[current_sum]++; 

         }
         
         return ans;
      }

      int maxSubarrayProduct(vector<int>&v){
         int product=1,ans=INT_MIN,n=v.size();

         for(int i=0;i<n;i++){
            product*=v[i];
            //cout<<product<<' ';
            ans=max(ans,product);
            if(v[i]==0) product=1;
         }

         product=1;
         for(int i=n-1;i>=0;i--){
            product*=v[i];
            ans=max(ans,product);
            if(v[i]==0) product=1;
         }

         return ans;
      }
      
      int max_Subarray_Sum_In_K(vector<int>&v,int k){
         int mxSum=INT_MIN,n=v.size(); 
         int windowSum=0; 
         for(int i=0;i<k;i++){
            windowSum+=v[i];
         }
         for(int i=k;i<n;i++){
            windowSum+=(v[i]-v[i-k]);
            mxSum=max(mxSum,windowSum);
         }
       return mxSum;
      }
      
      int minimum_Size_Subarray_Sum(vector<int>&v,int target){
         int left=0,right=-1,sum=0,ans=INT_MAX;
         int n=v.size();
         while(left<n){
       
            if(right+1<n &&sum<target){
                sum+=v[++right];
            }
            else{
               sum-=v[left++];
            }
            if(sum>=target){
               ans=min(ans,right-left+1);
            }
            
         }
         if(ans==INT_MAX) ans=0;
         return ans;

      }

      int lengthOfLongestSubstringWithoutRepeat(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;

        vector<bool> visited(255,false);

        int l=0,r=0,n=s.size(),ans=0;

        while(r<n){

            if(visited[s[r]]==true){
                while(visited[s[r]]==true){
                    visited[s[l]]=false;
                    l++;
                }
            }
        visited[s[r]]=true;
        ans=max(ans,r-l+1);
        r++;
    }
    return ans;

    }

};


int numberOf_Subarray_Sum_Equal_K(vector<int>&v, int k){
         map<int,int>All_sum;
         int current_sum=0,ans=0; 
         int n=v.size();
         for(int i=0;i<n;i++){
            current_sum+=v[i];
            if(current_sum==k) ans++;
            if(All_sum.find(current_sum-k)!=All_sum.end()){
               ans+=All_sum[current_sum-k];
            }
            All_sum[current_sum]++; 

         }
         
         return ans;
}

void silicon(){

  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  int ans=numberOf_Subarray_Sum_Equal_K(v,0);

cout<<ans<<endl;

  
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