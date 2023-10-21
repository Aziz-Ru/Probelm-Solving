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


int MX=1e6;
vector<int> nums(MX+6,1);
vector<int>tprimes;
void seive(){
   nums[0]=nums[1]=0;
    for(int i=2;i*i<MX;i++){
      if(nums[i]==1){
        for(int j=i*i;j<MX;j+=i)
          nums[j]=0;
      }
    }
    for(int i=2;i<=MX;i++){
      if(nums[i]){
        tprimes.push_back(i*i);
      }
    }
    
}

void solve(){
  // for(auto x:primes) cout<<x<<' ';
int n,k; cin>>n>>k; 
auto x=lower_bound(all(tprimes),n)-tprimes.begin();
auto y=upper_bound(all(tprimes),k)-tprimes.begin();
if(k>n) y=x;
cout<<x<<' '<<abs(x-y)<<nl;
}

int32_t main() {
  Fast;
  seive();
  int t; cin>>t;
  while(t--)solve();
  
  return 0;
}