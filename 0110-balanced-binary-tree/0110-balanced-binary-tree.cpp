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
    int depth(TreeNode * root){
        if(root==NULL){
           return 0;
       } 
        int lh=depth(root->left);
        int rh=depth(root->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL){
            return true;
        
        }
        
        int lefth=depth(root->left);
        int righth=depth(root->right);
        
        if((abs(lefth-righth)<=1) && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        return false;
    }
};