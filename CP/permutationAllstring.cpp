// C++ program to print all 
// permutations with duplicates allowed 
#include <bits/stdc++.h> 
using namespace std;
set<string>sp;
void permute(string& a, int l, int r) 
{ 
    // Base case 
    if (l == r) 
        sp.insert(a);
    else { 
        // Permutations made 
        for (int i = l; i <= r; i++) { 

            // Swapping done 
            swap(a[l], a[i]); 
            permute(a, l + 1, r); 

            // backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
int main() 
{ 
    string str;
    cin>>str;
    int n = str.size(); 

    // Function call 
    permute(str, 0, n - 1); 
    cout<<sp.size()<<'\n';
    for(auto x:sp)cout<<x<<'\n';
    return 0; 
} 

// This is code is contributed by rathbhupendra
