
#include<iostream>
#include<vector>
using namespace std;
// vector<int> vctr;
class Node 
{
    public:
           int data;
           Node *left;
           Node *right;
          //Constructor:
          Node(int data)
          {
              this->data=data;
              left=right=NULL;
          }
};
//Print:
void printing(vector<int> vctr)
{
    for(auto x : vctr)
    {
        cout<<x<<"-->";
    }
    cout<<endl;
}
void printAllPath(Node *root , vector<int> &vctr)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left ==NULL and root->right==NULL)
    {
        vctr.push_back(root->data);
        printing(vctr);
        vctr.pop_back();
        return;
    }
    vctr.push_back(root->data);
    printAllPath(root->left , vctr);
    printAllPath(root->right , vctr);
    vctr.pop_back();
    return;
}
//Build Binary Search Tree:
Node *buildBinarySearchTree(Node *root , int data)
{
    if(root==NULL)
    {
       Node *temp=new Node(data);
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
void inOrderTraversal(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
//Preorder Traversal:
void preOrderTraversal(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
//Main Function:
int main()
{ 

    Node * root = buildBinarySearchTree(root , 8);
    root = buildBinarySearchTree(root , 6);
    root = buildBinarySearchTree(root , 10);
    root = buildBinarySearchTree(root , 5);
    root = buildBinarySearchTree(root , 7);
    root = buildBinarySearchTree(root , 9);
    root = buildBinarySearchTree(root , 11);

    
    inOrderTraversal(root);
    cout<<endl;

    vector<int> path;
    printAllPath(root,path);
    return 0;
}
