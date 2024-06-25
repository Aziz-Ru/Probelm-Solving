#include <bits/stdc++.h>

using namespace std;
# define int long long int 

int power[200001];
int Hash[200001];

string check(const string& s, int len) {
        int n = s.size();
        unordered_set<int> visited; 
        for (int i = 1; i + len - 1 <= n; ++i) {
            int j = i + len - 1;
            int current_hash = Hash[j] - Hash[i - 1] * power[j - i + 1];
            
            if (visited.count(current_hash))
                return s.substr(i - 1, len); 
            visited.insert(current_hash);
        }
        return "";
    }

string longestDupSubstring(string s) {
        int base = 131;
        int n = s.size();
        
        power[0] = 1;
        for (int i = 0; i < n; ++i) {
            power[i + 1] = power[i] * base;
            
            Hash[i + 1] = Hash[i] * base + s[i];
        }
        for(int i=0;i<n;i++){
            cout<<Hash[i]<<' '<<power[i]<<'\n';
        }
        
        int left = 0, right = n;
        string result = "";
        while (left < right) {
            
            int mid = (left + right + 1) >> 1;
            string candidate = check(s, mid);
            if (candidate.empty())
                right = mid - 1; 
            else {
                left = mid; 
                result = candidate;
            }
        }
        return result;
    }

    

int32_t main(){
    int n; cin>>n;
    string s="banana";
    // cin>>s;
    string ls=longestDupSubstring(s);
    cout<<ls.size();
}