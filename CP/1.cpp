#include <bits/stdc++.h>
using namespace std;
# define int long long int 


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


vector<int> buildLPS(string& pattern) {
    int m = pattern.length();
    std::vector<int> lps(m, 0);
    int length = 0;
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}





int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  
  int n;cin>>n;
  string s;
  cin>>s;
  map<int,int>m;
  for(int i=0;i<n;i++){
    if(m.find(s[i])!=)
  }
  return 0;
  
}