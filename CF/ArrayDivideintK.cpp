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
int ans=LONG_MAX;

void total(int a[],int n,int k,int index,int sm,int mx){
  if(k==1){
    mx=max(mx,sm);
    sm = 0;
    for (int i = index; i < n; i++) {
      sm += a[i];
    }
    mx=max(mx,sm);
    ans=min(ans,mx);
    return;
    
  }
  sm=0;
  for(int i=index;i<n;i++){
    sm+=a[i];
    mx=max(mx,sm);
    total(a,n,k-1,i+1,sm,mx);
  }
}
void solve(){
int n,k,m=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];

  total(a,n,k,m,m,m);
cout<<ans;

}
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  //TC
  solve();
  return 0;
}