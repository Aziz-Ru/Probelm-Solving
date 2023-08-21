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
 int m,k,a1,ak;
 cin>>m>>k>>a1>>ak;
 int rem=m%k;
 if(rem>a1){
  int ans=rem-a1;
  ans+=max(0,m/k-ak);
  cout<<ans<<nl;
 }

 else{
int ans=0,q=m/k;
  a1-=rem;
  if(q>ak){
  q-=a1/k;
   q-=ak;
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