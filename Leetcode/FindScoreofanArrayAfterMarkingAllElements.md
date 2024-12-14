# [Find Score of an Array After Marking All Elements](https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/?envType=daily-question&envId=2024-12-13)

In this problem we need to track 
1. Smallest Element Which is Unmarked
2. Marked Elements

First i use vector<pair> to track all smallest element and use an array to check the index where if any index is already true that means already marked.

```
long long findScore(vector<int>& nums) {
        long long ans=0;
        vector<pair<int,int>> vp;
        for(int i=0;i<nums.size();i++){
           vp.push_back({nums[i],i});
        }
        sort(vp.begin(),vp.end());
        vector<bool> removes(nums.size(),false);

        for(auto x:vp){
            if(removes[x.second]) continue;
            ans+=x.first;
            // cout<<x.ff<<'\n';
            removes[x.second]=true;
            if(x.second+1<nums.size())removes[x.second+1]=true;
            if(x.second-1>=0) removes[x.second-1]=true;
            // cout<<x.ss-1<<' '<<x.ss<<' '<<x.ss+1<<'\n';
    
        }
        return ans;
    }
```
