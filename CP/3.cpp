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
int MX=1e10;


vector<int> check(int n,int k){
    vector<int>v;
    int tot=0,ans=0;
    for(int i=2;i*i<n;i++){
        int sq=i*i;
        int cnt=0;
        for(int j=1;j*j<=sq;j++){
        if(sq%j==0){
            if(j!=sq/j) cnt+=2;
            if(j*j==sq) cnt+=1;
        }
        if(cnt>3)break;
    }

    if(cnt==3){
         tot++;
         // cout<<i*i<<' ';
    }
    if(sq>k&&cnt==3) {
        ans++;
        // cout<<i*i<<' ';
    }
}
v.push_back(tot);
v.push_back(ans);
return v;

}


int32_t main() {
  Fast;
  int t; cin>>t;
  for(int i=1;i<=t;i++){
    int n,k;
    cin>>n>>k;
    vector<int> v=check(n,k);
    cout<<v[0]<<' '<<v[1]<<nl;
  }
  return 0;
}