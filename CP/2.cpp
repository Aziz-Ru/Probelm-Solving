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


 int cnt=0;
   
    int beautifulSubsets(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int x=lower_bound(nums.begin(),nums.end(),nums[i]+k)-nums.begin();
            int y=lower_bound(nums.begin(),nums.end(),abs(nums[i]-k))-nums.begin();
            // cout<<x<<' '<<y<<'\n';
            if(nums[x]==nums[i]+k)cnt++; 
            if(nums[y]==nums[i]-k)cnt++;
            cout<<cnt<<'\n';
        }
        return cnt;
    }
void solve(){
    
}


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  vector<int>v={4,2,5,9,10,3};
  cout<<beautifulSubsets(v,1);
   
  return 0;
  
}