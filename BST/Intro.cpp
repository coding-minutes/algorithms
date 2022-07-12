#include <bits/stdc++.h>
using namespace std;
 
class node{
    public:

    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
}; 


node* insertToBST(node* root,int data){

    if(root==NULL){
        node* root=new node(data);
        return root;
    }

    if(data < root->data){
        root->left=insertToBST(root->left,data);
    }
    else{
        root->right=insertToBST(root->right,data);
    }

    return root;
}

void takeinput(node* &root){

    int data;
    cin>>data;

    while(data!=-1){
        root = insertToBST(root,data);
        cin>>data;
    }
}

void inorderTraversal(node* root){

    if(root==NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<' ';
    inorderTraversal(root->right);
}


int main(){
    
    node* root=NULL;
    cout<<"Enter data for BST:"<<endl;
    takeinput(root);

    cout<<"Inorder Traversal of BST: ";
    inorderTraversal(root);

    return 0;
}