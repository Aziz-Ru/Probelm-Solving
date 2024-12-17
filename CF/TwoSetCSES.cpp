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
int n; cin>>n; 
int sm=n*(n+1)/2;
if(sm%2){
  cout<<"NO"<<endl;
  return;
}
cout<<"YES"<<endl;
int tot=0;
vector<int>v1,v2;
while(tot+n<=sm/2){
  tot+=n;
  v1.push_back(n);
  n--;
}
int k=sm/2-tot;
if(k) v1.push_back(k); 
cout<<v1.size()<<endl; 
for(auto x:v1) cout<<x<<' ';
for(int i=1;i<=n;i++){
  if(i!=k) v2.push_back(i);
}
cout<<endl<<v2.size()<<endl;
for(auto x:v2) cout<<x<<' ';



  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     silicon();
     // int t;
     // cin>>t;
     // while(t--){
     
     // }
  
  return 0;
}