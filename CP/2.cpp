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


int MX=1e6;
vector<int>primes;
vector<bool> nums(MX+6,false);
void seive(){
   nums[0]=nums[1]=false;
    for(int i=2;i*i<MX;i++){
      if(nums[i]==false){
        for(int j=i*i;j<MX;j+=i)
          nums[j]=true;
      }
    }
    for(int i=2;i<MX;i++){
        if(nums[i]==false){
            primes.push_back(i);
        }
    }
}


void silicon(){
int n,q;
cin>>n>>q;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
seive();
vector<int>visited(n,0);

for(int i=0;i<q;i++){
    int k=primes[i]; 
    stack<int>st;
    for(int j=n-1;j>=0;j--){
        if(v[j]%k==0 && visited[j]==0){
            visited[j]=k;
            cout<<v[j]<<endl;
        }
    }
}
for(int i=0;i<n;i++){
    if(visited[i]==0){
        cout<<v[i]<<endl;
    }
}


  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
    
     silicon();
     
  
  return 0;
}