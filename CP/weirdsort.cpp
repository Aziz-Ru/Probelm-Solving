#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())

const int siz=2e5+7,Inf=1e9+7;


void solve(){
  int n,m;
  cin>>n>>m;
  vector<int>a(n);
  vector<bool>b(n,false);
  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<m;i++){
    int x;cin>>x;
     b[x]=true;
  }
 
  for(int i=1,j=0;i<=n;i++){
    if(!b[i]){
      sort(a.begin()+j,a.begin()+i);
      //for(auto x:a) cout<<x<<' ';
      //cout<<nl;
      j=i;
    }
    
  }
  if(is_sorted(all(a))){
  cout<<"YES"<<nl;
  return;
}
  cout<<"NO"<<nl;

  
}

int32_t main() {
  fast;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  TC
  solve();
  return 0;
}