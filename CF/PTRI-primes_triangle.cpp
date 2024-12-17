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


int MX=1e8;
vector<int>primes;
vector<bool> nums(MX+1,false);
void seive(){
    //primes.push_back(1);
   nums[0]=nums[1]=false;
    for(int i=2;i*i<MX;i++){
      if(nums[i]==false){
        for(int j=i*i;j<MX;j+=i)
          nums[j]=true;
      }
    }
    for(int i=2;i<MX;i++){
        if(nums[i]==false){
            primes.push_back(i);
        }
    }
}


void solve(){
    int n; cin>>n;
    if(nums[n]){
        cout<<"-1"<<nl; 
        return;
    }
    auto x=(lower_bound(all(primes),n)-primes.begin())+1;
    //cout<<x;
    int row=(1+(sqrt(1+(x*8))))/2;
    //cout<<row<<' ';
    if(row*(row+1)/2<x){
        row+=1;
    }
    int start=(row*(row-1)/2);
    //cout<<start<<' ';
    //cout<<primes[start]<<' ';
    auto y=lower_bound((primes.begin()+start),(primes.begin()+start+row),n)-(primes.begin()+start)+1;
    cout<<row<<' '<<y<<nl;




  
}

int32_t main() {
  Fast;
   seive();
   int t; cin>>t;
   while(t--){
    solve();
   }
    
  return 0;
}