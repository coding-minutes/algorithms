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
//Print in Range -->elf:
void printInRange(node *root , int a, int b)
{
    if(root==NULL)
    {
        return;
    }
    printInRange(root->left , a , b);
    if(a<=root->data and root->data<=b){
        cout<<root->data<<" ";
    }
    printInRange(root->right , a, b);
}
// Second -Way
void printRange(node *root , int a, int b)
{
    if(root==NULL)
    {
        return;
    }
    else if(a<=root->data and root->data<=b)
    {
        printRange(root->left ,a ,b);
        cout<<root->data<<" ";
        printRange(root->right ,a ,b);
    }
    else if(root->data > b)
    {
        printRange(root->left ,a ,b);
    }
    else if(root->data < a)
    {
        printRange(root->right ,a ,b);
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
    printInRange(root, 5,12);
    cout<<endl;
    printRange(root , 5 ,12);
    return 0;
}
