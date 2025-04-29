# [Maximum Value of an Ordered Triplet I](https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/?envType=daily-question&envId=2025-04-02)

Enumerate all triples (i,j,k) satisfying i<j<k, and return the maximum value of all triples with values greater than or equal to 0.

```
class Solution {
public:
    long long maximumTripletValue(vector<int>& v) {
    int n=v.size();
    long long ans=0,diff=0,mx=0;

    for(int i=0;i<n;i++){
        ans=max(ans,diff*v[i]);
        diff=max(diff,mx-v[i]);
        mx=max(mx,(long long)v[i]);

    }
    // cout<<ans;
    return ans;
    }
};

```
