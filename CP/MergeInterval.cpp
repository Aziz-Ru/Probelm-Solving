class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        int n=v.size();
        for(int i=0;i<n;i++){
            int j=i,st=i;
            while( i+1<n&& v[i+1][0]<=v[j][1] ){
                i++;
                if(v[j][1]<=v[i][1]) j=i;
            }
            vector<int>tmp;
            tmp.push_back(v[st][0]);
            if(v[i][1]>v[j][1])tmp.push_back(v[i][1]);
            else tmp.push_back(v[j][1]);
            ans.push_back(tmp);
        }
        return ans;
    }
};