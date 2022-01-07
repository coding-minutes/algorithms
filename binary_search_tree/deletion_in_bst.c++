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
//Find the inorder successor:
int inorderSuccessor(node *root)
{
    node *temp=root;
  while(temp->left!=NULL)
  {
      temp=temp->left;
  }
  return temp->data;
}
//Searching in BST:
node *deletion(node *root, int data)
{
    if(root==NULL)
    {
        cout<<"Element has not been found "<<endl;
        return NULL;
    }
    if(root->data==data)
    {

        if((root->left != NULL) and (root->right != NULL))
        {
            int successor=inorderSuccessor(root->right);
            root->data= successor;
            root->right = deletion(root->right , successor);
        }
        else if(root->left !=NULL)
        {
            root=root->left;
        }
        else if(root->right !=NULL)
        {
            root=root->right;
        }
        else{
            root=NULL;
        }
        return root;
    }
    else if(root->data > data)
    {
        root->left = deletion(root->left , data);
    }
    else if(root->data < data)
    {
        root->right = deletion(root->right , data);
    }
    return root;
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
    root = buildBinarySearchTree(root , 3);
    root = buildBinarySearchTree(root , 10);
    root = buildBinarySearchTree(root , 1);
    root = buildBinarySearchTree(root , 6);
    root = buildBinarySearchTree(root , 14);
    root = buildBinarySearchTree(root , 4);
    root = buildBinarySearchTree(root , 7);
    root = buildBinarySearchTree(root , 13);

    inOrderTraversal(root);
    cout<<endl;
    root=deletion(root,6);
    inOrderTraversal(root);
   
    return 0;
}
