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
        return rec(root);
    }

    int rec(TreeNode* current) {
        if (current == nullptr) {
            return 0;
        }

        int leftDepth = rec(current->left);
        int rightDepth = rec(current->right);

        return max(leftDepth, rightDepth) + 1;
    }
};