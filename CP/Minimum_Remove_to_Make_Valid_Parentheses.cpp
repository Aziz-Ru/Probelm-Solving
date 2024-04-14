#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl " \n"
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;
vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

/*sort(all(v),[](int a,int b){
   return a>b;
});*/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        string ans;
        int cnt=0,i=0,j=s.size()-1;
        stack<int>pos,extra;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                pos.push(i);
            }
            else if(s[i]==')'){
                if(!pos.empty()){
                	// if ( is have in stack then i will pop 
                    pos.pop();
                }
                else if(pos.empty()){
                	// that get ) parentesis untill this (
                    extra.push(i);
                }
            }
        }

        vector<bool>vb(s.size(),1);
        while(!pos.empty()){
            vb[pos.top()]=0;
            pos.pop();
        }
        while(!extra.empty()){
            vb[extra.top()]=0;
            extra.pop();
        }
        for(int i=0;i<s.size();i++){
            if(vb[i])ans.push_back(s[i]);
        }
        return ans;
    }

};

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     int t;
     cin>>t;
     while(t--){
     silicon();
     }
  
  return 0;
}
/*
In this Question,Given String s of '(',')' and lowercase
english chracters.your task is remove minimum number of parenthesis
string is valid and return any valid string.

Input: s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"

in this question i only check
 for this ( parenthesis if i get ) this is will valid.
 wrong..
  if i only get ( but it's not close then it will be wrong.
  if i get first ) that will be wrong.




*/