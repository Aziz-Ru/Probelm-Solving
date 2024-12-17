#include<bits/stdc++.h>

using namespace std;



#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define TC int t; cin>>t;while(t--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



void solve(){
   ll n;
   cin>>n;

   ll x[n];
   vector<int>v1,v2,ans;
   

   ll mx=0,mn=LLONG_MAX;
   for(int i=0;i<n;i++){
     cin>>x[i];
   if(x[i]>=0) v1.push_back(x[i]);
   else v2.push_back(x[i]);
    mn=min(mn,x[i]);
    mx=max(mx,x[i]);
   }

  ll mxx=mx-mn,sm=0,j=0,i=0;
  sort(all(v2));
 //_print(v2);
 for(i=0;i<sz(v1);){

   if(abs(sm+v1[i])>=mxx&&j<sz(v2)){
    sm+=v2[j];
    ans.push_back(v2[j]);
    j++;
  }
  else {
    sm+=v1[i];
    ans.push_back(v1[i]);
    i++;
  }
  //debug(sm);

  }

  if(j<sz(v2)){
  for(int k=j;k<sz(v2);k++){
    sm+=v2[k];
    ans.push_back(v2[k]);
  }

  }
  //_print(ans);
  if(abs(sm)<mxx){
    cout<<"Yes"<<nl;
  for(auto x:ans) cout<<x<<" ";
  cout<<nl;
      }
  else cout<<"No"<<nl;

}

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("Error.txt", "w", stderr);
#endif
 fast;
 TC
 solve();
 return 0;
}
