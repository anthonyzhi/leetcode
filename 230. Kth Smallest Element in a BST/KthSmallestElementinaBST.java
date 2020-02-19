/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

 //分治法
class Solution {
    public int kthSmallest(TreeNode root, int k) {
        int n=nodeCount(root.left);
        if(n+1==k){
            return root.val;
        }else if(n+1<k){
            return kthSmallest(root.right,k-n-1);
        }else{
            return kthSmallest(root.left,k);
        }

    }
    private int nodeCount(TreeNode root){
        if(root==null) return 0;
        return 1+nodeCount(root.left)+nodeCount(root.right);
    }
}




//方法二

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    int num=0;
    int res;
    public int kthSmallest(TreeNode root, int k) {
        inorderTraversal(root,k);
        return res;
    }

    private void inorderTraversal(TreeNode node, int k){
        if(node==null) return;
        inorderTraversal(node.left,k);
        num++;
        if(num == k){
            res=node.val;
            return;
        }
        inorderTraversal(node.right,k);
    }
}
