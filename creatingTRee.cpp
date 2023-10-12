#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node *root){
    cout<<"data for the Node: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"enter data for the left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for the right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root){
    queue<node*>q;
    q.push(root);
    //to make sure the tree is not printed in a single line
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            //to make sure after all the node of same level are printed next level is printed in the next line
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void inOrder(node * root){
    if(root==NULL){return;}
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node * root){
    if(root==NULL){return;}
    cout<<root->data<<" ";
    preOrder(root->left);
    
    preOrder(root->right);
}

void postOrder(node * root){
    if(root==NULL){return;}
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main(){
    node* root=NULL;
    root=buildTree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    levelOrderTraversal(root);
    cout<<"Inorder traversal "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Preorder traversal "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"Postorder traversal "<<endl;
    postOrder(root);
}