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

int MX=1e6+1;
vector<int>primes;
vector<int>fact(MX);

void seive(){
  for(int i=1;i<MX;i++){
    fact[i]=i;
  }
  for(int i=4;i<MX;i+=2){
    fact[i]=2;
  }
    for(int i=3;i*i<MX;i+=2){
      if(fact[i]==i){
        for(int j=i*i;j<MX;j+=i){
          if(fact[j]==j){
            fact[j]=i;
          }

      }
    }
  }
}

void solve(){
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];
 }
 sort(all(v));
 if(v[0]==v[n-1]){
  cout<<"Yes"<<nl;
  return;
 }

map<int,int>mm;
 for(int i=0;i<n;i++){
  int k=v[i];
   while(k!=1){
    // cout<<fact[k]<<' ';
    mm[fact[k]]++;
    k/=fact[k];
  }   
 
 }
 for(auto x:mm){
  if(x.ss%n!=0) {
    cout<<"No"<<nl;
    return;
  }
 }
 cout<<"Yes"<<nl;
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