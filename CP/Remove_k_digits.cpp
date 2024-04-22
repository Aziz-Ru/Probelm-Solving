/*
Given string num representing a non-negative integer num, and an integer k,
 return the smallest possible integer after removing k digits from num.

 if remove left side most signnificant value then the string become small.
 1432219
 1
 14
 13
 12
 12
 1219


*/

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(auto x:num){
            while( !st.empty() && k>0 && st.top()>x){
                st.pop();
                k--;
            }
            st.push(x);
            
        }
        // cout<<st.top()<<endl;
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        // cout<<ans<<'\n';
        while(ans[i]=='0'&&i<ans.size()){
            i++;
            
        }
        if(ans.size()<=i ) return "0";
        return ans.substr(i);
        
    }

};
