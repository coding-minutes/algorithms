#include<iostream>
#include<queue>

using namespace std;

/*
PreOrder = Printing node first then going left then right.
InOrder = First going left, printing the node and then going right.
PostOrder = First going left and right then printing the node.
LevelOrder = Printing the nodes which are at same level.
*/

class Node{
public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

// Pre-order Traversal of Tree
void PreOrder(Node* root){
    if(root == NULL){
        return;
    }
    
    cout << root->data << "->";
    PreOrder(root->left);
    PreOrder(root->right);
}

// In-order Traversal of Tree
void InOrder(Node* root){
    if(root == NULL){
        return;
    }

    InOrder(root->left);
    cout << root->data << "->";
    InOrder(root->right);
}

// Post-Order Traversal Of Tree
void PostOrder(Node* root){
    if(root == NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << "->";
}

// Level-Order Traversal of Tree
void LevelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* temp = q.front();
            q.pop();
            cout << temp->data << "->";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);
  root->right->left = new Node(8);
  root->right->right = new Node(15);

  /*-Tree structure
             1
           /   \
          12    9
        /   \  /  \
        5   6 8    15
  */

  cout << "\nIn-Order traversal \n";
  InOrder(root);
  // Output :- 5->12->6->1->8->9->15->

  cout << "\nPre-Order Traversal \n";
  PreOrder(root);
  // Output :- 1->12->5->6->9->8->15->

  cout << "\nPost-Order Traversal \n";
  PostOrder(root);
  // Output :- 5->6->12->8->15->9->1->
  
  cout << "\nLevel-Order Traversal \n";
  LevelOrder(root);
  // Output :- 1->12->9->5->6->8->15->

  return 0;
}