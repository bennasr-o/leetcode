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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        stack<pair<TreeNode*, int>> trackSum;
        trackSum.push(make_pair(root, root->val));
        while(!trackSum.empty()) {
            pair<TreeNode*, int> curr = trackSum.top();
            trackSum.pop();
            if (curr.first->left) trackSum.push(make_pair(curr.first->left, curr.second + curr.first->left->val));
            if (curr.first->right) trackSum.push(make_pair(curr.first->right, curr.second + curr.first->right->val));
            if (curr.second == targetSum and curr.first->right == curr.first->left) {
                return true;
            }
            
        }
        return false;
    }
};
