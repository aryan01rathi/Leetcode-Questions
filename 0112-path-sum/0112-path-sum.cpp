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
    
    bool sumPath(TreeNode*root, int ts,int sum){
       
        if(root==NULL)return false;
        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            if(sum==ts){return true;}
        }
       // we are doing OR so that it does not return false in the firs traversal only
        return sumPath(root->left,ts,sum+root->val)||sumPath(root->right,ts,sum+root->val);
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
       
        return sumPath(root,targetSum,0);
        
    }
};