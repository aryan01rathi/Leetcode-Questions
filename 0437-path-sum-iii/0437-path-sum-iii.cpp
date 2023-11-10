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
    void path(TreeNode* root, vector<int>s, int k, int &sum){
        if(root==NULL)return ;
        s.push_back(root->val);
        
        path(root->left, s,k,sum);
        path(root->right,s,k,sum);
        
        int size= s.size();
        double count=0;
        for(int i=size-1;i>=0;i--){
            count+=s[i];
            if(count==k)sum++;
        }
        s.pop_back();
    }
    
    int pathSum(TreeNode* root, int k) {
         vector<int>s;
        int sum=0;
        path(root,s,k,sum);
        return sum;
    }
};