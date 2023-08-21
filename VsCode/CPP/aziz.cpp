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
 int m,k,a,b;
 cin>>m>>k>>a>>b;
 if(m<a+b*k){
  cout<<0<<nl;
  return;
 }
 int x=m-(a+b*k);
 int y=(x/k)*k;
 if(x==y){
  cout<<x/k<<" ";
 }
 else{
  if(a-(x-y)>=0){
    cout<<x/k+1<<nl;
  }
  else{
    cout<<x/k+(x-y)<<nl;
  }
 }

  
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