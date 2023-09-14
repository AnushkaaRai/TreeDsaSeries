/*Leetcode:Balanced Binary Tree
         condition to be satisfied in the code
         1)left balanced
         2) right balanced
         3)height diff of left and right <=1
*/
class Solution {
    private:pair<bool,int> balanced(TreeNode* root)
{
           if(root==NULL){return {true,0};}

         pair<bool,int> left=balanced(root->left);
         pair<bool,int> right=balanced(root->right);

         bool leftans=left.first;
         bool rightans=right.first;
         bool condition=abs(left.second-right.second)<=1;
        pair<bool,int> ans;
         if(leftans && rightans && condition)
         {
             ans.first=true;
         }
        else
        ans.first=false;

        ans.second=1+ max(left.second,right.second);
        return ans;
}
public:
    bool isBalanced(TreeNode* root) {  
        return balanced(root).first;
    }
};