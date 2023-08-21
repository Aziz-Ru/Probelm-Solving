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
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;

vector<vector<int>>subsets;
void generate(vector<int> &subset,int i, vector<int>&num){
 /*subsets store all segment 
 subset vector store element 
 first generate call without i th  element
 after this subsset store i element 
 then we secondly call generate where we give subset 
 after we call this then we popback for first genate() who have no elemnet 
 */
  if(i==num.size()){
  	subsets.push_back(subset);
  	return;
  }
	generate(subset,i+1,num);
	subset.push_back(num[i]);
	generate(subset,i+1,num);
	subset.pop_back();
}
void solve(){
	int n; cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int>empty;
	generate(empty,0,a);
	for(auto x:subsets){
		for(auto y:x) cout<<y<<" ";
			cout<<nl;
	}

}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}