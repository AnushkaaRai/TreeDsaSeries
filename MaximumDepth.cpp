/* Leetcode 104.Maximum Depth of Binary Tree
Solution:base case if root is null then we will return zero 
         it means null node has zero hight
         we find it for left and right subtree then 
         find maximum btw them and return 1      
         +max(left,right)
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {return 0;}

        int left=maxDepth(root->left);
        int right=maxDepth(root->right);

        return 1+max(left,right);
    }
};