#include <bits/stdc++.h>
using namespace std;


#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<' ';_print(x);cerr<<'\n';
#else
#define debug(x)
#endif
void _print(int t) {cerr<< t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {cerr<<"["; _print(p.ff); cerr<< ","; _print(p.ss);cerr<<"]";}
template <class T> void _print(vector <T> v) {cerr<<"[";for (T i : v) {_print(i); cerr<< ",";}cerr<< "]";}
template <class T> void _print(set <T> v) {cerr<<"[";for (T i : v) {_print(i);cerr<<','; }cerr<< "]";}
template <class T> void _print(multiset <T> v) {cerr<< "[";for (T i : v) {_print(i);cerr<< " ";}cerr<<"]";}
template <class T, class V> void _print(map <T, V> v) { cerr<< "[";for (auto i : v) {_print(i); cerr<< " ";}cerr<< "]"; }


void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(k+1),b(k+1);

    for(int i=1;i<=k;i++){
        cin>>a[i];
    }
    for(int i=1;i<=k;i++){
        cin>>b[i];
    }
   
    // debug(v);
    
    while(q--){
        int x;
        cin>>x;
        int ind=lower_bound(a.begin(),a.end(),x)-a.begin();

        if(a[ind]==x){
            cout<<b[ind]<<' ';
        }else{
            // cout<<a[ind]<<' '<<a[ind-1]<<'\n';
            int k=(1LL*(x-a[ind-1])*(b[ind]-b[ind-1]))/(a[ind]-a[ind-1]);
            int ans=b[ind-1]+k;
            cout<<ans<<' ';
        }

    }
    cout<<'\n';


}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t; 
  while(t--){
    solve();
  }   
  return 0;
  
}