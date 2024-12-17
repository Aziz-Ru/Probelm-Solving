#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll siz=2e5+7,Inf=1e9+7;

void solve(){
ll a,b,c=2,mn=1e9; cin>>a>>b;

  for(int i=0;i<30;i++){
  		if(b+i==1) continue;
     ll cnt=i,q=a;
   		while(q){
   			q/=(b+i);
   			cnt++;
   		}
   		mn=min(cnt,mn);
   }
   cout<<mn<<nl;
}
int main() {

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  fast;
  TC
  solve();
  return 0;
}