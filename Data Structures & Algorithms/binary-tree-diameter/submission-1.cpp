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
int diameter= 0;
    int diameterOfBinaryTree(TreeNode* root) {
        rec(root);
        return diameter;
    }

    int rec(TreeNode* current){
        if(current==nullptr){
            return 0;
        }

        int leftheight=rec(current->left);
        int rightheight=rec(current->right);
        diameter=max(diameter,leftheight+rightheight);

       


        return max(leftheight,rightheight)+1;
    }
};
