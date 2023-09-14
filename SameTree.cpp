/*Leetcode 100:Identical tree or Same Tree
             base case: if both pointer to TreeNode
             is null then return true
      second thing: if one of them is Null then 
             return false
      Third thing:  if value of both node is different 
             tehn return false
       we will find the same for left side and right side
       then return true if both are true else false*/
     
              

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return true;
        }

        if(p==NULL || q==NULL)
        {
            return false;
        }

        if(p->val!=q->val)
        {
            return false;
        }
         return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};