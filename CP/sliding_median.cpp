    
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

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void silicon(){
int n,m; cin>>n>>m;
ordered_multiset om;
queue<int> q;
for(int i=0;i<n;i++){
    int x; cin>>x;

    if(q.size()==m){
        // if(m&1){
        //     cout<<*(om.find_by_order(m/2))<<' ';
        // }
        // else cout<<*(om.find_by_order(m/2-1))<<' ';
        int p=q.front();
        cout<<p<<' '<<(om.order_of_key(p))<<' '<<*(om.find_by_order(om.order_of_key(p)))<<endl;
        //om.erase(om.find_by_order(om.order_of_key(p)));
        q.pop();
    }
    q.push(x);
    om.insert(x);
}
    if(m&1)cout<<*(om.find_by_order(m/2))<<' ';
    else cout<<*(om.find_by_order(m/2-1))<<' ';
}

int32_t main() {
     Fast;
     // int t;cin>>t;
     // while(t--)
     silicon();
  
  return 0;
}