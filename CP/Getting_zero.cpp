#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) (x.size())
const int siz=2e5+7,Inf=1e9+7;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};
int ans[siz];
int cnt(int n){

  if(n%32768==0) return 0;
  int ct=0,k,mn=INT_MAX;

  for(int i=0;i<16;i++){
    int p=n+i;
    k=0;
    for(int i=1;i<=15;i++){
       if(p%32768==0){
        mn=min(mn,(ct+k));
      }
      k++;
      p*=2;
      p%=32768;
    }
    ct++;
  }
return mn;
}

void so(){
  for(int i=1;i<32768;i++){
    ans[i]=cnt(i);
  }
}

void solve(){
int n; cin>>n;
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  cout<<ans[x]<<' ';
}
  
}

int32_t main() {
  so();
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
 // TC
  solve();
  return 0;
}