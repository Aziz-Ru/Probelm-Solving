#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second


 string repeatLimitedString(string s, int repeatLimit) {
        vector<int> v(26,0);
        for(auto x:s){
            v[x-'a']++;
        }
        int i=25;
        string ans;
        while(i>=0){
            if(v[i]){
                if('a'+i==ans.back()){
                    i--;
                    continue;
                }

                int k=0;
                while(v[i]>0 && k<repeatLimit){
                    k++;
                    ans.push_back('a'+i);
                    v[i]--;
                    
                }
                
                if(v[i]>0){
                    int l=i-1;
                    while(l>=0){
                        if(v[l]){
                            v[l]--;
                            ans.push_back('a'+l);
                            break;
                            
                        }
                        l--;

                    }
                }

            }
            else i--;
        }

    return ans;
}


void solve(){
    cout<<repeatLimitedString("aababab",2);
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