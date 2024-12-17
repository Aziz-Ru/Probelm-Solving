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
void solve(){

	int n;
	cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
		
		}
 	int mn=1,mx=n,l,r; 
 	bool ok=false;
	for(int i=0,j=n-1;i<j;){
		if(a[i]!=mn&&a[i]!=mx&&a[j]!=mn&&a[j]!=mx){
			ok=true;
			l=i+1;
			r=j+1;
			break;
		}
		
		if(a[i]==mn){
			mn++,i++;
			

		}
		 if(a[i]==mx){
			mx--;
			i++;
			
		}
		 if(a[j]==mx){
			j--,mx--;
			
		}
		 if(a[j]==mn){
			mn++,j--;

		}

	}
	if(ok)cout<<l<<" "<<r<<nl;
	else cout<<"-1"<<nl;
	//cout<<mn<<" "<<mx<<nl;
}
int main() {
  fast;
  
  TC
  solve();
  return 0;
}