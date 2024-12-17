#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define sz(x) int(x.size())

const int siz=2e5+7,Inf=1e9+7;
string reverse(string s){
  string ans="";
  for(int i=s.size()-1;i>=0;i--){
    ans+=s[i];
  }
  return ans;
}
void solve(){
  string ss; cin>>ss;
  int x=0;
  while(ss[x]=='0')x++;
  string s=ss.substr(x,ss.size());

   int n=s.size();
   if(n==1){
    int p=s[0]-'0';
    if(s[0]<'9') {
      cout<<p+1<<nl;
    }
    else {
      cout<<p+2<<nl;
    }
    return;
   }

string ft,lt;
if(n&1){
  ft=s.substr(0,s.size()/2);
  lt=s.substr(s.size()/2+1,s.size());
  //cout<<ft<<' '<<lt<<nl;
}
else{
ft=s.substr(0,s.size()/2);
lt=s.substr(s.size()/2,s.size());
}

if(s.size()%2==0){
  int a=ft.size();
  string p=reverse(ft);
  if(p>lt){
    cout<<ft+p<<nl;
    return;
  }
  int i=a-1;
  while(ft[i]=='9'&&i>=0){
        ft[i]='0';
        i--;
    }
    if(ft[0]=='0') {
      ft[0]++;
      //cout<<ft[0]<<' ';
      p=reverse(ft);
      cout<<ft+'0'+p<<nl;
    }else{
      ft[i]++;
      p=reverse(ft);
      cout<<ft+p<<nl;
    }
  
 }
 else{
//cout<<ft<<' '<<lt<<nl;
   string p=reverse(ft);
   char ch=s[s.size()/2];
   if(p>lt){
    cout<<ft+ch+p<<nl;
    return;
  }
  if(ch!='9'){
    ch++;
    cout<<ft+ch+p<<nl;
    return;
  
  }
  int i=ft.size()-1;
  while(ft[i]=='9'&&i>=0){
        ft[i]='0';
        i--;
    }
     if(ft[0]=='0') {
      ft[0]++;
      //cout<<ft[0]<<' ';
      p=reverse(ft);
      cout<<ft+"00"+p<<nl;
    }else{
      ft[i]++;
      p=reverse(ft);
      cout<<ft+'0'+p<<nl;
    }

 }
}
int32_t main() {
  fast;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  TC
  solve();
  return 0;
}