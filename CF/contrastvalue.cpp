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
#define sz(x) int(x.size())
const int siz=2e5+7,Inf=1e9+7;

int tot;
void solve(){
  int n;
  cin>>n;
  vector<int>v(n),a;
  for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]!=v[i-1]) a.push_back(v[i]);
}

  if(a.size()==1){
     cout<<1<<nl;
     return;
  }
 
int cnt=0;
for(int i=1;i<a.size()-1;i++){
if(a[i]>a[i-1]&&a[i]>a[i+1]) cnt++;
else if(a[i]<a[i-1]&&a[i]<a[i+1]) cnt++;
  }
  cout<<cnt+2<<nl;
}

int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  Fast;
  TC
  solve();
  return 0;
}