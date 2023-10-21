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

void solve(){
  int n; cin>>n;
  vector<int>v(n),u(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    u[i]=v[i];
  }
  if(is_sorted(all(v))){
    cout<<"yes\n";
    cout<<1<<' '<<1<<nl;
    return;
  }
  reverse(all(u));
  if(is_sorted(all(u))){
    cout<<"yes\n";
    cout<<1<<' '<<n<<nl;
    return;
  }
  int st;
  for(int i=1;i<n;i++){
    if(v[i]<v[i-1]){
      st=i-1;
      while(v[i]<v[i-1] &&i<n) i++;
      reverse(v.begin()+st,v.begin()+i);
      //cout<<st<<' '<<i-1<<nl;
      if(is_sorted(all(v))){
        cout<<"yes\n";
        cout<<st+1<<' '<<i<<nl;
        return;
      }
      break;
    }
  }
  cout<<"no";
}

int32_t main() {
  Fast;
  // int t; cin>>t;
  // while(t--)
    solve();
  
  return 0;
}