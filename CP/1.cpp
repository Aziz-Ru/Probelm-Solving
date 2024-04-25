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

int longestIdealString(string s, int k) {
        stack<char>st;
        int ans=0;
        for(auto x:s){
            int cnt=0;
            while(!st.empty()&&abs((st.top()-'a')-(x-'a'))<=k){
               cnt++;
                st.pop();
            }
            ans=max(ans,cnt);
            st.push(x);
        }
        int cnt=0;
         while(!st.empty()){
         cnt++;
         cout<<st.top();
         st.pop();
        }
        ans=max(cnt,ans);
        return ans;
    }

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     cout<<longestIdealString("acfgbd",2);
  
  return 0;
}