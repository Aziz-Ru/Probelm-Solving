#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second

int  string_to_number(string s){
  int cnt=1,n=0;
  for(int i=s.size()-1;i>=0;i--){
    n=(cnt*(s[i]-'0'))+n;
    cnt*=10;
  }
return n;
  
}

void solve(){
    vector<long long> upper={9,99,999,9999,99999,999999,9999999,99999999,999999999};
    vector<long long> lower={1,10,100,1000,10000,100000,1000000,10000000,100000000};

    int limit=3;
    // int start
    string s="3000";
    int t=string_to_number(s); 
    if(upper[limit]<t){
        cout<<0; 
        // return 0;
    }
    int k=log10(343);
    cout<<k;
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