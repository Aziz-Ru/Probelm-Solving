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
int  mx=1e6+5;
vector<int>primes;
vector<int>nums(mx,0);
vector<bool> ok(mx,false);
int binpow(int base,int pow){
      int ans=1;
      while (pow)
      {
      if(pow&1) ans*=base;//ans=ans*base%m;
       base*=base;//base=base*base%m;
       pow/=2;
      }
    return ans;
  }

bool check(int n){
  int tmp=n,cnt=0;
  while(n>0){
    if(n%10==0) return false;
    n/=10;
    cnt++;
  }
  n=tmp;
  int div=binpow(10,cnt-1);
  //cout<<div<<' ';
  while(n){
    n%=div;
    div/=10;
    if(n!=0&&ok[n]==true)
      return false;
  }

  return true;
}
void seive(){
   ok[0]=ok[1]=true;
    for(int i=2;i*i<mx;i++){
      if(ok[i]==false){
        for(int j=i+i;j<mx;j+=i)
          ok[j]=true;
      }
    }

    for(int i=2;i<=mx;i++){
    if(ok[i]==false&&check(i)) {
    nums[i]=1;
    }
    }
    for(int i=1;i<mx;i++){
      nums[i]+=nums[i-1];
    }
}


void solve(){
int x; cin>>x;
  //for(int i=0;i<200;i++){
    cout<<nums[x]<<'\n';
  //}


  
}

int32_t main() {
  Fast;
  seive();
  int t; cin>>t;
  for(int i=1;i<=t;i++){
    //cout<<"Case "<<i<<':';
    solve();
  }
  return 0;
}