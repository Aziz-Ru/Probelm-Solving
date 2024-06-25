IN Given Question ,We need to convert a binary search  tree to a greater sum tree. We need to ensure every node value update .
In binary serach tree is tree that contains that satisfies these constrints:
- The Left subtree of node contains only nodes with less than the node's key
- The right subtree of node contains only nodes with keys greater than nodes key
- Both the left and right subtree must be binary search trees.

        4
        /\
       1  6
      /\   /\
     0  2  5 7
        \     \
        3      8
        

        30
        /\
       36  21
      /\   /\
     36 35 26 15
         \      \
         33      8
        

## My Approch

- I want to traverse rightmost node until i get leaf nodes . While traversing we keep  runing a total sum of all the nodes values . after each right most  node visit we update the value of node. then we running leftmost node. 

```
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
int sm=0;
    TreeNode* bstToGst(TreeNode* root) {
        
        if(root){
            bstToGst(root->right);
            sm+=root->val;
            root->val=sm;
            bstToGst(root->left);
        }
       
        
        return root;
    }
};
```

