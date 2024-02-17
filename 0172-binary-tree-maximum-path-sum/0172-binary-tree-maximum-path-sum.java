/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    int max=0;
    public int maxPathSum(TreeNode root) {
        if(root==null) return 0;
        int max=0;
        maxSubPathSum(root,max);
        return max;
    }
    
    public int maxSubPathSum1(TreeNode root){
        if(root==null) return 0;
        int curMax=root.val;
        int leftMax=maxSubPathSum(root.left,max);
        int rightMax=maxSubPathSum(root.right,max);
        if(leftMax>0) curMax+=leftMax;
        if(rightMax>0) curMax+=rightMax;
        if(max<curMax) max=curMax;
        return curMax;
    }
    
    
}