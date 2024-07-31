class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        
        vector<vector<int>>r;
        for(int i=0;i<n;i++){
            r.push_back({positions[i],healths[i],directions[i]-'A',i});
            cout<<directions[i]-'A';
        }
        sort(r.begin(),r.end());
        vector<vector<int>>st;
        int lcnt=0,rcnt=0;

        for(auto x:r){
            
            if(x[2]==17 || st.empty() || st.back()[2]==11){
                st.push_back(x);
                continue;
            }
            if(x[2]==11){
                bool add =true;
                while(!st.empty() && st.back()[2]==17 && add){
                    if(st.back()[1]==x[1] ){
                        st.pop_back();
                         add=false;
                    }else if(st.back()[1]>x[1]){
                        st.back()[1]-=1;
                        add=false;
                        
                    }else {
                        st.pop_back();
                        x[1]-=1;
                    }
                }
                if(add){
                st.push_back(x);
            }
            
            }

            
        }
        
        sort(st.begin(),st.end(),[](vector<int>&a,vector<int>&b){
            return a[3]<b[3];
        });
        vector<int>ans;
        for(auto x:st){
            ans.push_back(x[1]);
        }
        
        return ans;


        
    }
};
