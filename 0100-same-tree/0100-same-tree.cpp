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
    void traversal(TreeNode* p, vector<char>&vp){
        if(p==NULL){
            vp.push_back('N');
            return;
        }
        int data=p->val;
        
        char cv= static_cast<char>(data+'0');
     
        vp.push_back(cv);
        traversal(p->left,vp);
        traversal(p->right,vp);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<char>vp;
        vector<char>vq;
        traversal(p,vp);
        traversal(q,vq);
        for(int i=0;i<vq.size();i++){
            if(vp[i]!=vq[i]){
                return false;
            }
        }
        
        return true;
        
    }
};