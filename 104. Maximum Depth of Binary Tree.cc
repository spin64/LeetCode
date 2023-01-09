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
    int maxDepth(TreeNode* root) {

        // empty tree
        if (root == nullptr){
            return 0;
        }

        // base case
        if (root->left == nullptr && root->right == nullptr){
            return 1;
        } else if (root->left == nullptr) { // recursive steps
            return 1 + maxDepth(root->right);
        } else if (root->left == nullptr) {
            return 1 + maxDepth(root->left);
        } else {
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            if (left > right) {
                return 1 + left;
            } else {
                return 1 + right;
            }
        }
    }
};