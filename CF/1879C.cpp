  
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

const int siz=2e5+7,Inf=998'244'353;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void silicon(){
int cnt=1;
string s;
cin>>s;
int n=s.size();
int k=n;
  for(int i=0;i<n;){
    int j=i+1;
    while(s[i]==s[j]&&j<n)j++;
    cnt=(cnt*1LL*(j-i))%Inf;
    k--;
    i=j;
  }
  for(int i=1;i<=k;i++)
    cnt=(cnt*1LL*i)%Inf;
  cout<<k<<' '<<cnt<<endl;
  
}

int32_t main() {
     Fast;
     int t;cin>>t;
     while(t--)
     silicon();
  
  return 0;
}