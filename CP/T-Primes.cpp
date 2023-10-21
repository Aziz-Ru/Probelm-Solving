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
vector<int>primes;
vector<bool> nums(MX+6,false);
void seive(){
   nums[0]=nums[1]=false;
   nums.push_back(0);
    for(int i=2;i*i<MX;i++){
      if(nums[i]==false){
        for(int j=i*i;j<MX;j+=i)
          nums[j]=true;
      }
    }
    for(int i=2;i<MX;i++){
        if(nums[i]==false){
            primes.push_back(i*i);
        }
    }
}

void solve(){
  // for(auto x:primes) cout<<x<<' ';
int n; cin>>n; 
for(int i=0;i<n;i++){
  int x; cin>>x;
  auto a=(lower_bound(all(primes),x)-primes.begin());
  if(primes[a]==x)cout<<"YES"<<nl;
  else cout<<"NO"<<nl;
}
}

int32_t main() {
  Fast;
  seive();
    solve();
  
  return 0;
}