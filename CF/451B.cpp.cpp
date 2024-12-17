#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void solve(){
int n ,k;
cin>>n>>k;
//cout<<n<<' '<<k;
if(k<n){
  cout<<k<<nl;
  return;
}
int a=k/n,b=0,cnt=0;
while((a-b)>0){
  k+=(a-b);
  b=a;
  a=k/n;
  // cnt++;
}
cout<<k<<nl;
}

int32_t main() {
  Fast;
  int t; cin>>t;
  while(t--)
    solve();
  
  return 0;
}