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
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int n; cin>>n; 
    string s; cin>>s;
    ll sm=0;
    vector<ll>v;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            sm+=i;
            int x=n-1-i*2;
            v.pb(x);
            cout<<x<<" ";
        }
        else {
            sm+=n-1-i;
            v.pb(2*i-n+1);
            cout<<2*i-n+1<<" ";
        }
    }
}
int main() {
  fast;
  TC
  solve();
  return 0;
}