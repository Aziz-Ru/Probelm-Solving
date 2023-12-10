     
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};


class BIT {
private:
  int *bit_tree;
  int n;

public:
  // Constructor
  BIT(int size) {
    n = size + 1;
    bit_tree = new int[n];
    for (int i = 0; i < n; ++i) {
      bit_tree[i] = 0;
    }
  }

  // Destructor
  ~BIT() {
    delete[] bit_tree;
  }

  // Function to update the BIT with value at index i
  void update(int i, int val) {
    while (i < n) {
      bit_tree[i] += val;
      i += (i & -i); // i + (i & -i) is the next power of 2 greater than i
    }
  }

  // Function to get the prefix sum up to index i (inclusive)
  int get_prefix_sum(int i) {
    int sum = 0;
    while (i > 0) {
      sum += bit_tree[i];
      i -= (i & -i); // i - (i & -i) is the predecessor of i in the binary representation
    }
    return sum;
  }

  // Function to get the sum in the range [l, r] (inclusive)
  int get_range_sum(int l, int r) {
    if (l > r) {
      return 0; // invalid range
    }
    return get_prefix_sum(r) - get_prefix_sum(l - 1);
  }
};



void silicon(){
     int n; cin>>n;
     BIT b(n);
     for(int i=1;i<=n;i++){
          int x; cin>>x;
          b.update(i,x);
     }
     int q;
     cin>>q;
     while(q--){
          int l,r;
          cin>>l>>r;
          cout<<b.get_range_sum(l,r)<<' ';
     }
  
}

int32_t main() {
     Fast;
     // int t;cin>>t;
     // while(t--)
     silicon();
  
  return 0;
}