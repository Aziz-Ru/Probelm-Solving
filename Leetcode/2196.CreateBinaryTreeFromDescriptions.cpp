/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
    vector<int> visit(100001);
    int root=-1;
    int parent[100001]= {0};
    TreeNode* node[100001]={NULL};
    for(int i=0;i<descriptions.size();i++){
        int p=descriptions[i][0];
        int ch=descriptions[i][1];
        int lr=descriptions[i][2];
        if(!visit[p]){
            node[p]=new TreeNode(p);
            visit[p]=1;
            if(parent[p]==0)root=p;
        }
        if(!visit[ch]){
            node[ch]=new TreeNode(ch);
            visit[ch]=1;
        }
        parent[ch]=p;
        if(lr){
            node[p]->left=node[ch];
        }else{
            node[p]->right=node[ch];
        }
    }
    while(parent[root]!=0){
        root=parent[root];
    }
    return node[root];
    }
};
