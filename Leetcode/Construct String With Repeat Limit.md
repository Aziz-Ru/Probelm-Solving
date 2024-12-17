# Construct String With Repeat Limit
We need to construct the longest possible string under specific constraints, where no character can appear consecutively more than a given limit. 
A real-life application of this problem could be in designing passwords, where specific characters (letters, numbers, or symbols) need to be distributed without excessive
repetition while adhering to complexity rules.

### Approach 1: Greedy Character Frequency Distribution
The key to solving this problem is to focus on the largest letters first, as they help create a string that’s lexicographically larger. However, we need to be careful not to use the same letter too many times in a row due to the limit on consecutive usage. 
To handle this, we should alternate between letters to avoid hitting the limit. 

```
class Solution {
public:
     string repeatLimitedString(string s, int repeatLimit) {
        vector<int> v(26,0);
        for(auto x:s){
            v[x-'a']++;
        }
        int i=25;
        string ans;
        while(i>=0){
            if(v[i]){
                if(ans.size()>0&&'a'+i==ans.back()){
                    i--;
                    continue;
                }
                int k=0;
                while(v[i]>0 && k<repeatLimit){
                    k++;
                    ans.push_back('a'+i);
                    v[i]--;
                    
                }
                
                if(v[i]>0){
                    int l=i-1;
                    while(l>=0){
                        if(v[l]){
                            v[l]--;
                            ans.push_back('a'+l);
                            break;
                            
                        }
                        l--;

                    }
                }

            }
            else i--;
        }

    return ans;
    }
};
```
