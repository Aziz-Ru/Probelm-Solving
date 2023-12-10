    
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

const int siz=2e5+1,Inf=1e9+7;
double PI=3.14159265358979323846;

int sum[20][200001];

void silicon(){

  int l,r;
  cin>>l>>r;
  int ans=0;
  for(int i=0;i<20;i++){
    ans=max(ans,sum[i][r]-sum[i][l-1]);
  }
 cout<<r-l+1-ans<<endl;
}

int32_t main() {

    for(int i=0;i<20;i++){
        for(int j=1;j<=200000;j++){
            sum[i][j]=sum[i][j-1]+(j>>i & 1);
        }
    }

     Fast;
     int t;cin>>t;
     while(t--)
     silicon();
  
  return 0;
}