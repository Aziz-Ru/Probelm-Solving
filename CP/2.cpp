#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
 int rem=m%k;
 int ans=0;
 if(a<rem){
 ans=rem-a;
 ans+=max(0,m/k-b);
 cout<<ans<<nl;
 }
 else{
  int q=m/k;
  a-=rem;
  if(q>b){
   q-=b;
   q-=a/k;
   ans+=max(0,q);
  }
  cout<<ans<<nl;
 }
 
}

int main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
    //cout<<"Case "<<i<<':';
    solve();
  }
  return 0;
}