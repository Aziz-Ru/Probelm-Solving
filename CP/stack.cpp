#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll siz=2e5+7,Inf=1e9+7;

void solve(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"Case "<<i<<": "<<nl;
	stack<string> fw,bk;
	fw.push("http://www.lightoj.com/");
	string s,temp,p;
	while(1){
		cin>>s;
		if(s=="VISIT"){
	     cin>>p;
			if(fw.empty()){
				cout<<"Ignored"<<nl;
			}
			else{
				temp=fw.top();
				fw.pop();
				bk.push(temp);
				while(!fw.empty()){
					fw.pop();
				}
				fw.push(p);
			}
			cout<<fw.top()<<nl;
		}
		else if(s=="FORWARD"){
			
			if(fw.size()<2){
				cout<<"Ignored"<<nl;
			}
			else{
				temp=fw.top();
				fw.pop();
				bk.push(temp);
				cout<<fw.top()<<nl;
			}
		}
		else if(s=="BACK"){
			if(bk.empty()){
				cout<<"Ignored"<<nl;
			}
			else{
				temp=bk.top();
				bk.pop();
				fw.push(temp);
				cout<<fw.top()<<nl;
			
		  }
		}
		else if(s=="QUIT") break;
	 }

	}
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
  fast;
  solve();
  
  //solve();
  return 0;
}