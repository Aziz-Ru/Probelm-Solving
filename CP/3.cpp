#include <bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl " \n"
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 


void silicon(){
  vector<int>v={6,3,5,2};
  map<int,int>m; 
  vector<int>a(4,0);
  int sm=0,p=9;
  for(int i=0;i<v.size();i++){
    sm+=v[i]; 
    if(m.find(sm%p)!=m.end()){
      a[i]= m[sm%p];
    }
    else{
      m[sm%p]=i; 
      a[i]=i+1;
    }
  }
  for(auto x:a) cout<<x<<' ';

  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     int t;
     cin>>t;
     while(t--){
     silicon();
     }
  
  return 0;
}