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

string b,c,d;
cin>>b>>c>>d;
// cout<<c.size()<<' ';
int cnt=0,i=c.size()-1; 
// cout<<i<<endl;
vector<char>v1(i+1);
while(i>=0){
   int x=c[i]-'0';
   int y=b[i]-'0';
   // cout<<x<<' '<<y;
   if(cnt==0){
      if(x<y){
         x+=10;
         int k=x-y;
         cout<<k<<' ';
         char ch=char(k); 
         v1[i]=ch;
         cnt=1;
      }
      else{
         int k=x-y;
         cout<<k<<' ';
         char ch=char(k);
         v1[i]=ch;
      }
   }
   else{
      y+=1;
      if(x<y){
         x+=10;
         int k=x-y;
         cout<<k<<' ';
         char ch=char(k);
         v1[i]=ch; 
         cnt=1;
      }
      else{
         int k=x-y;
         cout<<k<<' ';
         char ch=char(k);
         v1[i]=ch;
      }
   }
   i--;
}
// cout<<v1.size()<<endl;
// for(auto x:v1)cout<<x;
cout<<endl;

  
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