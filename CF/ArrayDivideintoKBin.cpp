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
bool check(int a[],int mid,int n,int k){
  int cnt=0,sm=0;
  for(int i=0;i<n;i++){
    if(a[i]>mid) return false;
    sm+=a[i];
    if(sm>mid){
      cnt++;
      sm=a[i];
    }
  }
  cnt++;
  if(cnt<=k) return true;
  return false;
}

void solve(){
int n,k,m=0;
cin>>n>>k;
int a[n],begin=0,end=0;

for(int i=0;i<n;i++) {
  cin>>a[i];
  begin=max(begin,a[i]);
  end+=a[i];
}
int ans;
while(begin<=end){
  int mid=(begin+end)/2;
  if(check(a,mid,n,k)){
    ans=mid;
    end=mid-1;
  }
  else begin=mid+1;

}
cout<<ans<<nl;


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