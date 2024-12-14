#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second

int firstOccurence(vector<int>v,int k){
    int low=0,high=v.size()-1,first=-1; 
    while(low<=high){
        int mid=(low+high)/2; 
        if(v[mid]==k){
            first=mid; 
            high=mid-1;
        }
        else if(v[mid]>k){
            high=mid-1;
        }
        else low=mid+1;
    }
    return first;
}

int lastOccurence(vector<int>v,int k){
    int low=0,high=v.size()-1,last=-1; 
    while(low<=high){
        int mid=(low+high)/2; 
        if(v[mid]==k){
            last=mid; 
            low=mid+1;
        }
        else if(v[mid]>k){
            high=mid-1;
        }
        else low=mid+1;
    }
    return last;
}


void solve(){
    vector<int>v={1,2,4,5,6,7,8,8,9};
    cout<<firstOccurence(v,8)<<' '<<lastOccurence(v,8);
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