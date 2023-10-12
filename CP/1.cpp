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
  int n,ans=0;
  cin>>n;
  for(int i=2;i<=n;i++){
    int k=i,p=2;
    set<int>ss;
    while(k>1){
      if(k%p==0){
        k/=p;
        ss.insert(p);
      }
      else{
        p++;
      }
    }
    if(ss.size()==2) ans++;
   // cout<<nl;

  }
  cout<<ans;
  
}

int32_t main() {
  Fast;
  solve();
  
  return 0;
}