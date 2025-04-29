# [Maximum Candies Allocated to K Children](https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/?envType=daily-question&envId=2025-03-14)

This is the same problem like [Minimum Time to Repair Cars](https://leetcode.com/problems/minimum-time-to-repair-cars/description/?envType=daily-question&envId=2025-03-16)

Here We need to search a maximum number of candies that can get each child.

so we distribute the candies minimum 0 to maximum .

now in this range we need search can we allocate them in each children (candies[i]/numOfCandies).

```
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {

        int mx=0,n=candies.size();
        for(int i=0;i<n;i++){
            mx=max(mx,candies[i]);
        }

        int right=mx,left=0;
        while(left<right){
            long long canAllocated=0;
            int mid=(left+right+1)/2;
            for(int i=0;i<n;i++){
               canAllocated+=(candies[i]/mid);
            }
            if(canAllocated>=k){
                left=mid;
                // ans=allocated;
            }else{
                right=mid-1;
            }
        }
        return left;
    }



};
```

Hello aow are you that can give you name that is world you are so kind that wegenerate make the beautifull world that is zahin xbox for gaming naming that ps5 i need call of duty game that is awesome graphics.
