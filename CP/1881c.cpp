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
  int n; cin>>n;
string s[n];
for(int i=0;i<n;i++){
  cin>>s[i];
}
int cnt=0;
for(int row=0;row<n/2;row++){
for(int col=0;col<n/2;col++){
   int sm=s[row][col]+s[col][n-1-row]+s[n-1-row][n-1-col]+s[n-1-col][row];
   int mx=max({s[row][col],s[col][n-1-row],s[n-1-row][n-1-col],s[n-1-col][row]});
   cnt+=(4*mx)-sm;
  }
  //cout<<nl;
}
cout<<cnt<<nl;
}
int32_t main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
    //cout<<"Case "<<i<<':';
    solve();
  }
  return 0;
}