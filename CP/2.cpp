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


// circular and distinctive
vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>cnt(nums.size(),0);
        int mx=*max_element(nums.begin(),nums.end());
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums[i]){
                st.pop();
            }
            if(!st.empty()) cnt[i]=st.top();
            else if(mx==nums[i]) cnt[i]=-1;
            else cnt[i]=INT_MAX;
            st.push(nums[i]);
        }
        // this if any index need to circular 
        for(int i=nums.size()-1;i>=0;i--){
            if(cnt[i]==INT_MAX && nums[i]!=mx){
            while(!st.empty()&&st.top()<=nums[i]){
                st.pop();
            }
            cnt[i]=st.top();
            st.push(nums[i]);
            }
            
        }
        // which item are maximum
        for(int i=0;i<cnt.size();i++){
            if(cnt[i]==INT_MAX)cnt[i]=-1;
        }        
        for(auto x:cnt)cout<<x<<' ';
        return cnt;
    }

int32_t main() {
    
    //time__("Run"){
     
     //}
     vector<int>v={1,8,-1,-100,-1,222,1111111,-111111};
     // vector<int>q={1,2,3,5,6,7,9,11};
     nextGreaterElements(v);
  
  return 0;
}