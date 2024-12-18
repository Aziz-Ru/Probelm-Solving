# Final Prices With a Special Discount in a Shop

Here We need to reduce price by next minimum distance minimum value.

Here I Use Stack for increasing element tracking if i cannot get this minimum value , i need to reduce value this value;

```
vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        for(int i=0;i<prices.size();i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                prices[st.top()]-=prices[i];
                st.pop();
            }
            st.push(i);
        }
        return prices;
    }
```
