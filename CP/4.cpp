    
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<' ';_print(x);cerr<<'\n';
#else
#define debug(x)
#endif

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define set_bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

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


const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

/*sort(all(v),[](int a,int b){
   return a>b;
});*/

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void silicon(){
    
    
  
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
     Fast;
     int t;cin>>t;
     while(t--)
     silicon();
  
  return 0;
}

#include <bits/stdc++.h>

using namespace std;
# define int long long int 

int power[200001];
int Hash[200001];

string check(const string& s, int len) {
        int n = s.size();
        unordered_set<int> visited; 
        for (int i = 1; i + len - 1 <= n; ++i) {
            int j = i + len - 1;
            int current_hash = Hash[j] - Hash[i - 1] * power[j - i + 1];
            
            if (visited.count(current_hash))
                return s.substr(i - 1, len); 
            visited.insert(current_hash);
        }
        return "";
    }

string longestDupSubstring(string s) {
        int base = 131;
        int n = s.size();
        
        power[0] = 1;
        for (int i = 0; i < n; ++i) {
            power[i + 1] = power[i] * base;
            
            Hash[i + 1] = Hash[i] * base + s[i];
        }
        
        int left = 0, right = n;
        string result = "";
        while (left < right) {
            
            int mid = (left + right + 1) >> 1;
            string candidate = check(s, mid);
            if (candidate.empty())
                right = mid - 1; 
            else {
                left = mid; 
                result = candidate;
            }
        }
        return result;
    }

    

int32_t main(){
    int n; cin>>n;
    string s;
    cin>>s;
    string ls=longestDupSubstring(s);
    cout<<ls.size();
}