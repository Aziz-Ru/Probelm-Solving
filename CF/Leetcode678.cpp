#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl " \n"
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};



bool checkValidString(string s) {
        int cnt=0,st=0,n=s.size();
        vector<int>v(n,-1);
       for(int i=0;i<n;i++){
        if(s[i]=='*') cnt++;
        else if(s[i]==')') v[i]=cnt;
       }
       cnt=0;
       for(int i=n-1;i>=0;i--){
        if(s[i]=='*') cnt++;
        else if(s[i]=='(') v[i]=cnt;
       }
       for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
       }
       return false;
    }

void silicon(){
// cout<<checkValidString("(((((*)))**");
           
                


  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     // int t;
     // cin>>t;
     // while(t--){
     silicon();
     // }
  
  return 0;
}