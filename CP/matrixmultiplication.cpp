#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) (x.size())
const int siz=2e5+7,Inf=1e9+7;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};
int a[5][100][100];
int sm[5][5];
int n,m;


int32_t main() {
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[1][x][y]=1;
	}
	for(int x=2;x<=n;x++){

	for(int i=1;i<=n;i++){
	   for(int j=1;j<=n;j++){
		for(int k=1;k<=n;k++){
		a[x][i][j]+=a[x-1][i][k]*a[1][k][j];
		}
	  }
	}
 }
 for(int i=1;i<=n;i++){
 	//cout<<i<<nl;
 	for(int j=1;j<=n;j++){
		for(int k=1;k<=n;k++){
			sm[j][k]+=a[i][j][k];
		//cout<<a[i][j][k]<<' ';
		}
		//cout<<nl;
	  }

 }
 for(int i=1;i<=n;i++){
 	for(int j=1;j<=n;j++){
 		cout<<sm[i][j]<<' ';
 	}
 	cout<<nl;
 }
 
  return 0;
}