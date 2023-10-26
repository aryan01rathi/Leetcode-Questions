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
    
    void zigzagtraversal(vector<vector<int>>&res, vector<int>&ans, TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        bool flip=0;
        while(!q.empty()){
            TreeNode * temp=q.front();
            q.pop();
            
            if(temp==NULL){
                if(flip==1){
                    flip=0;
                    reverse(ans.begin(),ans.end());
                    res.push_back(ans);
                }
                else{
                    flip=1;
                    res.push_back(ans);
                }
                //res.push_back(ans);
                while(ans.empty()!=true){
                    ans.pop_back();
                }
                if(!q.empty()){
                    q.push(NULL);
                }
                
            }else{
                ans.push_back(temp->val);
             
                    if(temp->left!=NULL){
                        //cout<<temp->left->val<<endl;
                        q.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        q.push(temp->right);
                    }
                
            }
        }
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        vector<int>ans;
        if(root==NULL){
            return res;
        }
        else{
            zigzagtraversal(res,ans,root);
        }
        return res;
    }
};