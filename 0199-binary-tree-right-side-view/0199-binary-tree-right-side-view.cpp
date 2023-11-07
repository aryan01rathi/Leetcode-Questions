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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
return ans;}
        map<int,int>hline_val;
        queue<pair<TreeNode*, int>>tempstorage;
        tempstorage.push({root,0});
        while(!tempstorage.empty()){
            auto it =tempstorage.front();
            tempstorage.pop();
            
            TreeNode* node=it.first;
            int hl=it.second;
            
            hline_val[hl]=node->val;
            
            if(node->left!=NULL){
                tempstorage.push({node->left,hl+1});
            }
            
            if(node->right!=NULL){
                tempstorage.push({node->right,hl+1});
            }
            
        }
        
        for(auto i:hline_val){
            ans.push_back(i.second);
        }
        
       return ans;
    }
};