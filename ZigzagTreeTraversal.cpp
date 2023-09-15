
Leetcode:103
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> row(size);

            for (int i = 0; i < size; i++) {
                TreeNode* t = q.front();
                q.pop();

                int index = flag ? i : (size - 1 - i); // Adjust the index calculation
                row[index] = t->val;

                if (t->left != nullptr) {
                    q.push(t->left);
                }
                if (t->right != nullptr) {
                    q.push(t->right);
                }
            }
            flag = !flag;
            ans.push_back(row);
        }

        return ans;
    }
};
