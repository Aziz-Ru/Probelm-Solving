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

vector<int>primes;
vector<int>nums(10000000,0);
void seive(){
   int  mx=10000000;
   vector<bool> ok(mx,false);
    for(int i=2;i*i<mx;i++){
      if(ok[i]==false){
        for(int j=i+i;j<mx;j+=i)
          ok[j]=true;
      }
    }
    for(int i=2;i<mx;i++){
    if(ok[i]==false) primes.push_back(i);
    }
}
void find(){
  for(int i=1;i*i<10000000;i++){
    for(int j=1;(j*j*j*j)<10000000;j++){
      int x=(i*i)+(j*j*j*j);
      auto pos=lower_bound(all(primes),x)-primes.begin();
      if(primes[pos]==x){
        nums[x]=1;
      }
    }
  }
   for(int i=1;i<10000000;i++){
    nums[i]+=nums[i-1];
   }
}

void solve(){
int x; cin>>x;
cout<<nums[x]<<'\n';

  
}

int32_t main() {
  Fast;
  seive();
  find();
  int t; cin>>t;
  for(int i=1;i<=t;i++){
    //cout<<"Case "<<i<<':';
    solve();
  }
  return 0;
}