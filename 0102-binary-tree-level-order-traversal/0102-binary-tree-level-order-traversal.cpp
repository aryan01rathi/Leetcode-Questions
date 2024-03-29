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
        
    void levelOrderTraversal(TreeNode* root, vector<vector<int>>&res, vector<int>&ans){
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        //q    - NULL 20 9  
        //temp - NULL  
        while(!q.empty()){
           TreeNode* temp= q.front();
            q.pop();
            if(temp==NULL){
                res.push_back(ans);
                while(!ans.empty()){
                    ans.pop_back();
                }
                if(!q.empty()){
                    q.push(NULL);
                }
            }else{
                ans.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }   
            }
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        vector<int>ans;
        if(root==NULL)return res;
        else levelOrderTraversal(root,res, ans);
        return res;
        
    }
};