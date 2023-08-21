#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
const int siz=2e5+7,Inf=1e18;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void solve(){
 int n; cin>>n;
 int a[n];
 for(int i=0;i<n;i++) {
 	cin>>a[i];
 	//cout<<a[i]<<' ';
 }
 int m; cin>>m;
 int b[m];
 for(int i=0;i<m;i++) {
 	cin>>b[i];
 }
 vector<int>v;

 for(int i=0;i<n;i++){
 	for(int j=0;j<m;j++){
 		//cout<<a[i]<<' '<<b[j]<<nl;
 		int k=__gcd(a[i],b[j]);
 		//cout<<k<<' ';
 		if(k!=1){
 			v.push_back(k);
 			a[i]/=k;
 			b[j]/=k;
 		}
 	}
 }
 int total,carry;
 int flage=0;
 int res[10]={0};
  res[8]=1;
 int temp=1;
 for(int i=0;i<v.size();i++){
 	carry=0;
  temp=(temp*v[i]);

  if(temp>999999999) flage=1;

  for(int j=8;j>=0;j--){
   total=res[j]*v[j];
   res[j]=(total+carry)%10;
   carry=(total+carry)/10;
   }

 }
 
 
 if(flage){
 	for(int i=0;i<9;i++) cout<<res[i];
 }
else{
	cout<<temp;
}

  
}

int32_t main() {
  Fast;
  	solve();
  
  return 0;
}