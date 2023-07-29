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
    
    void depth(TreeNode *root, int height, int &ans){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            ans=max(height, ans);
            
        }
        
        depth(root->left, height+1, ans);
        depth(root->right, height+1,ans);
    }
    
    int maxDepth(TreeNode* root) {
       // if(root==NULL){
       //     return 0;
       // } 
       //  int lh=maxDepth(root->left);
       //  int rh=maxDepth(root->right);
       //  return 1+max(lh,rh);
        //-------------------------------------------
        
        int ans=0;
        depth(root,1,ans);
        return ans;
        
        
        
    }
};