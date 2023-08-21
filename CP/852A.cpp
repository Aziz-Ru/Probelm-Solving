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
const ll siz=2e5+7,Inf=1000000007;
vector<ll>primes;
void seive(){
   ll mx=1000005;
   vector<bool> ok(mx,false);
    for(ll i=2;i<mx;i++){
      if(ok[i]==false){
        primes.push_back(i);
        for(ll j=i+i;j<mx;j+=i)
          ok[j]=true;
      }
    }
}

ll check(ll a,ll b){
  double oo=1;
  oo*=b*b*b;
  oo*=a;
  ll ans=oo;
  if (oo>4e18) return 4e18;
  return ans;
}


void solve(){
 ll n; cin>>n;
  ll cnt=0;
 // cout<<primes.size();
 // for(auto x:primes) cout<<x<<" ";
  //int q=sz(primes)-1;
 for(int i=0;i<sz(primes)-1;i++){

 if(po<=k){
  for(int j=i+1;j<sz(primes);j++){
    po*=primes[i];
    if(po>4e18) break;
    int cf=po;
    if(cf>n) break;
    else cnt++;
  }

 } else break;

}
cout<<cnt<<nl;

}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  fast;
  //int tt=1;
 //  TC{
 // // cout<<"Case "<<tt<<": ";
 //  solve();
 //  tt++;
  //}
  seive();
  solve();
  return 0;
}