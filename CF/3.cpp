#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second


void solve(){
    
    double left=1,right;
    int x;
    cin>>x; 
    right=x;
    while(right-left>1e-6){

        double mid= (double)(left+right)/2;
        double k=mid*mid;
        if(k==x){
            cout<<"Find it"<<mid;
            return;
        }
        if(k>x){
            right=mid;
        }else left=mid;
    }
    cout<<left<<' '<<right<<'\n';

}


int32_t main() {
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