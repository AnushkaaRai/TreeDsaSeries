
Leetcode 124:Maximum path sum
             In this solution we are storing maxi which have longest
             path sum and we are return sum of node and maximun of
             left or right.

class Solution {
    private:int FindMaxPath(TreeNode* root,int &maxi)
    {
        if(root==NULL)
        {return 0;}

        int left=max(0,FindMaxPath(root->left,maxi));
         int right=max(0,FindMaxPath(root->right,maxi));

         maxi=max(maxi,left+right+root->val);

         return max(left,right)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
       int maxi=INT_MIN;
        FindMaxPath(root,maxi);
        return maxi;
    }
};