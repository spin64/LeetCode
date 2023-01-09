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
    int minDepth(TreeNode* root) {
    // empty tree
        if (!root){
            return 0;
        }

        // base case
        if (!root->left && !root->right){
            return 1;
        } else if (!root->left) { // recursive steps
            return 1 + minDepth(root->right);
        } else if (!root->right) {
            return 1 + minDepth(root->left);
        } else {
            int left = minDepth(root->left);
            int right = minDepth(root->right);
            if (left < right) {
                return 1 + left;
            } else {
                return 1 + right;
            }
        }
    }
};