#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define int long long int
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

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
     int n=spells.size(),m=potions.size(); 
     vector<int>ans;  
     sort(potions.begin(),potions.end());
    
     for(int i=0;i<n;i++){
        int idx=m;
        int l=0,r=m;
        while(l<=r){
        int mid=(l+r)/2;
        if((potions[mid]*1LL*spells[i]*1LL)*1LL>=success) {
            r=mid-1;
            idx=mid;
        }
        else l=mid+1;
     }
     //cout<<idx<<' ';
     ans.push_back(m-idx);
     }
     
return ans;
}
void solve(){
vector<int>spells,potions;
long long success;
for(int i=0;i<3;i++){
    int x; cin>>x; 
    spells.push_back(x);
}
for(int i=0;i<5;i++){
    int x; cin>>x; 
    potions.push_back(x);
}
cin>>success;
vector<int>ans=successfulPairs(spells,potions,success) ;
for(auto x:ans) cout<<x<<' ';

}

int32_t main() {
  Fast;
    solve();
  
  return 0;
}