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

 int minimizeArrayValue(vector<int>& nums) {
    int result=0,p=1;
    int n=nums.size(),mx=0;
    long long int total=0;
    for(int i=0;i<n;i++){
        mx=max(mx,nums[i]); 
        total+=nums[i];
        if(total%p==0){
            int k=total/p;
            p++;
            result=max(result,k);
        }
        else{
            int k=total/p+1;
            p++;
            result=max(result,k);
        }
    }
    if(mx==nums[0]){
        return mx;
    }
    
return result;
}
void solve(){
    vector<int> v;
    for(int i=0;i<4;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    cout<<minimizeArrayValue(v);
}

int32_t main() {
  Fast;
    solve();
  
  return 0;
}