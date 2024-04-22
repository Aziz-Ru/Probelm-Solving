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

// split into K subarrays to minimize the maximum sum of all subarrays


bool check(int mid,vector<int>v,int k){
   int cnt=0,sum=0;
   for(int i=0;i<v.size();i++){
      // If individual element is greater 
        // maximum possible sum 
      if(v[i]>mid) {
         return false;
      }
      // Increase sum of current sub - array 
      sum+=v[i];
      // If the sum is greater than 
        // mid increase count 
      if(sum>mid){
         // cout<<sum<<' ';
         cnt++;
         sum=v[i];
      }
   }
   cnt++;
   if(cnt<=k){
      return true;
   }
   return false;
}

void silicon(vector<int>v,int k){
   int start=0,end=0;
   for(int i=0;i<v.size();i++){
      start=max(start,v[i]);
      end+=v[i];
   }
   int ans=0; 
   // cout<<start<<' '<<end;
   while(start<=end){
      int mid=(start+end)/2; 
      // If mid is possible solution 
      // Put answer = mid; 
      if(check(mid,v,k)){
         ans=mid; 
         end=mid-1;
      }
      else{
         start=mid+1;
      }
   }
   cout<<ans<<endl;  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     vector<int>v={1,2,3,4};
     int k=3; 
     silicon(v,k);
     // cout<<ans<<endl;
  
  return 0;
}