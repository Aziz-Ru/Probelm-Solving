#include <bits/stdc++.h>
using namespace std;
# define int long long int 

void solve(){
    priority_queue<int>pq;
    pq.push(90);
    pq.push(89);
    pq.push(9);
    pq.push(100);
    while(!pq.empty()){
        cout<<pq.top()<<'\n';
        pq.pop();
    }
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
while(!even.empty()||!odd.empty()){
        if(cnt==0){
            if(!even.empty){
                if((!odd.empty()&&even.top()>odd.top())||odd.empty()){
                    alice+=even.top(); 
                    even.pop();
                }
                else{
                    if(!odd.empty()) odd.pop();
                }
            }
            else{
                if(!odd.empty())odd.pop();
            }
            cnt=1;
        }
        else{
            if(!odd.empty()){
                if((!even.empty()&&odd.top()))
            }
            else{

            }
        }
    }
