#include<iostream>
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

int main(){
    node* root=NULL;
    root=buildTree(root);
    
}