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
const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

 int myAtoi(string s) {
        string a="";
        char b='+';
        for(int i=0;i<s.size();i++){
            if(s[i]=='-') b=s[i];
            else if(s[i]>='0'&&s[i]<='9') a+=s[i];
        }
        int ans=0,k=1;
        for(int i=a.size()-1;i>=0;i--){
           // cout<<a[i];
            int x=a[i]-'0';
            ans=x*k+ans;
            k*=10;
            //cout<<ans<<nl;
        }
        if(b=='-') ans*=-1;
        cout<<ans;
        return ans;
    }

int32_t main() {
  Fast;
  string s;
  cin>>s;
  myAtoi(s);
  return 0;
}