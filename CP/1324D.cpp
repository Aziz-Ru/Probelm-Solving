  
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

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void silicon(){
  int n; cin>>n;
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
vector<int>v(n);
for(int i=0;i<n;i++){
  int x; cin>>x;
  v[i]=a[i]-x;
}
 // for(auto x:v) cout<<x<<' ';
sort(all(v));
int ans=0;
for(int i=0;i<n;i++){
  if(v[i]<=0) continue;
  int j=lower_bound(all(v),-v[i]+1)-v.begin();
  ans+=i-j;
}
cout<<ans;
  
}

int32_t main() {
     Fast;
     // int t;cin>>t;
     // while(t--)
     silicon();
  
  return 0;
}