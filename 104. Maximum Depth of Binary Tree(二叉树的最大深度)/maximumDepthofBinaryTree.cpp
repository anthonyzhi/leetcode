//方法一 递归


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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        else{
            int leftDepth=maxDepth(root->left);
            int rightDepth=maxDepth(root->right);
            return max(leftDepth, rightDepth) + 1;
        }
    }
};
