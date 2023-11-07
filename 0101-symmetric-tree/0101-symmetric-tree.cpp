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
    void storevect(TreeNode* root, vector<int>&ans, bool check){
        if(root==NULL) {
            ans.push_back(-1);
            return;
        }
        
        ans.push_back(root->val);
        if(check==1){
        storevect(root->left, ans, check);
        storevect(root->right,ans, check);
        }
        else 
        {
            storevect(root->right, ans, check);
            storevect(root->left,ans, check);
        }
        
    }
    bool isSymmetric(TreeNode* root) {
        vector<int>lv;
        vector<int>rv;
        bool check=0;
        storevect(root->left,lv,check);
        check=1;
        storevect(root->right,rv,check);
        
        for(int i=0;i<lv.size();i++){
            if(lv[i]!=rv[i]){
                return false;
            }
            
        }
        return true;
    }
};