/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        preOrder(root,0,res);
        return res;
    }
    void preOrder(TreeNode *root,int depth,vector<vector<int>> &res){
        if(!root) return;
        if(depth>=res.size())
            res.push_back(vector<int>{});
        res[depth].push_back(root->val);
        preOrder(root->left,depth+1,res);
        preOrder(root->right,depth+1,res);
    }
};
