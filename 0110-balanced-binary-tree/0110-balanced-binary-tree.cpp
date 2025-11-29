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
        bool ans=true;
        int height(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        if(abs(leftHeight-rightHeight)>1) ans=false;
        return max(leftHeight,rightHeight)+1;
        }
    bool isBalanced(TreeNode* root) {
       height(root);
       return ans;
    }
};