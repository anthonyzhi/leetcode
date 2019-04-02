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
    long last=LONG_MIN;
    bool isValidBST(TreeNode* root) {
        bool res=true;
        if(root==NULL)
            return true;
        res&=isValidBST(root->left);
        if(last<root->val)
            last=root->val;
        else 
            return false;
        res&=isValidBST(root->right);
        return res;
    }
};
