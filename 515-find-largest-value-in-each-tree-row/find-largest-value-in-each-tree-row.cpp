/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            int max_value = INT_MIN;
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                max_value = max(max_value, curr->val);
                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right != nullptr) {
                   q.push(curr->right);
                }
            }
            result.push_back(max_value);
        }
        return result;
    }
};