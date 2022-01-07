#include<bits/stdc++.h>
using namespace std;

class node 
{
    public:
           int data;
           node *left,*right;
          //Constructor:
          node(int data)
          {
              this->data=data;
              left=right=NULL;
          }
};
//Searching in BST:
void search(node *root, int data)
{
    if(root==NULL)
    {
        cout<<"Element has not been found "<<endl;
        return;
    }
    if(root->data==data)
    {
        cout<<"Element has been found "<<endl;
    }
    else if(root->data > data)
    {
        return search(root->left , data);
    }
    else if(root->data < data)
    {
        return search(root->right , data);
    }
}
//Build Binary Search Tree:
node *buildBinarySearchTree(node *root , int data)
{
    if(root==NULL)
    {
       node *temp=new node(data);
       return temp;
    }
    if(data < root->data)
    {
        root->left=buildBinarySearchTree(root->left , data);
    }
    else if(data > root->data)
    {
        root->right=buildBinarySearchTree(root->right , data);
    }
    return root;
}
//Inorder Traversal:
void inOrderTraversal(node * root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
//Main Function:
int main(int argc, char const *argv[])
{
    node *root = buildBinarySearchTree(root , 8);
    root = buildBinarySearchTree(root , 6);
    root = buildBinarySearchTree(root , 10);
    root = buildBinarySearchTree(root , 5);
    root = buildBinarySearchTree(root , 7);
    root = buildBinarySearchTree(root , 9);
    root = buildBinarySearchTree(root , 11);

    inOrderTraversal(root);
    cout<<endl;
    search(root , 11);
    search(root , 12);
    return 0;
}
