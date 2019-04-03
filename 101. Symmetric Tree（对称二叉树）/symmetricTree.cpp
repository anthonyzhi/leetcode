//法一 递归


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
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }
    bool isMirror(TreeNode *l,TreeNode *r){
        if(l==NULL&&r==NULL)
            return true;
        if(l==NULL||r==NULL)
            return false;
        if(l->val==r->val)
            return isMirror(l->left,r->right)&&isMirror(l->right,r->left);
        return false;
    }
};



//方法二  在对列中使用迭代

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        q.push(root);
        while(!q.empty()){
            TreeNode *t1=q.front();q.pop();    
            TreeNode *t2=q.front();q.pop();
            if(t1==NULL&&t2==NULL)
                continue;
            if(t1==NULL||t2==NULL)
                return false;
            if(t1->val!=t2->val)
                return false;
            q.push(t1->left);
            q.push(t2->right);
            q.push(t1->right);
            q.push(t2->left);
        }
        return true;
    }
};
