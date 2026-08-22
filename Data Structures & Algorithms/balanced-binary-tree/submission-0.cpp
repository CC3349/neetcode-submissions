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
    bool balanced=true;
    bool isBalanced(TreeNode* root) {
        rec(root);
        return balanced;
    }
    int rec(TreeNode* current){
        if(current==nullptr){
            return 0;
        }

        int leftheight=rec(current->left);
        int rightheight=rec(current->right);
        if(abs(leftheight-rightheight)>1){
           balanced=false;

        }
        

        return max(leftheight,rightheight)+1;
    }
};
