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

struct Node{
  Node *links[26];
  bool flag=false;
  bool containsKey(char ch){
    return links[ch-'a']!=NULL;
  }
  void put(char ch,Node* node){
    links[ch-'a']=node;
  }
  Node* get(char ch){
    return links[ch-'a'];
  }
  void setEnd(){
    flag=true;
  }
  bool isEnd(){
    return flag;
  }

};

class Trie{
private:
  Node* root;
public:
  Trie(){
    root=new Node();
  }
  void insert(string word){
    Node* node=root; 
    for(int i=0;i<word.size();i++){
      if(!node->containsKey(word[i])){
        node->put(word[i],new Node());
      }
      //moves
      node->get(word[i]);
    }
    node->setEnd();

  }
  bool search(string word){
    Node* node=root;
    for(int i=0;i<word.size();i++){
      if(!node->containsKey(word[i])){
        return false;
      }
      node=node->get(word[i]);
    }
    return node->isEnd();

  }
  bool startWith(string prefix){
    Node* node=root;
    for(int i=0;i<prefix.size();i++){
      if(!node->containsKey(prefix[i])){
        return false;
      }
      node=node->get(prefix[i]);
    }
    return true;
  }
};

void silicon(){
int n ;cin>>n;
Trie tr;
for(int i=0;i<n;i++){
  string s;
  cin>>s;
  tr.insert(s);
}

int q; cin>>q; 

while(q--){
  string s;
  cin>>s; 
  // cout<<tr.search(s);
  cout<<tr.startWith(s);
}


  
}

int32_t main() {
    
    //time__("Run"){
     
     //}
     Fast;
     silicon();
     
  
  return 0;
}