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
