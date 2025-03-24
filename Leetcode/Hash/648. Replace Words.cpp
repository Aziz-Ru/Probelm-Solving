class Solution {
public:
    string replaceWords(vector<string>& dictionary, string s) {
        set<string>dict(dictionary.begin(),dictionary.end());
        string ans,cur;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                cur.push_back(' ');
                ans+=cur;
                cur.clear();
            }
            else{
            cur.push_back(s[i]);
            // cout<<cur<<'\n';
            if(dict.find(cur)!=dict.end()){
                while(i<n&&s[i]!=' ')i++;
                if(i!=n)cur.push_back(' ');
                ans+=cur;
                cur.clear();
            }
            }
        }

        if(cur.size())ans+=cur;
        return ans;
    }
};
