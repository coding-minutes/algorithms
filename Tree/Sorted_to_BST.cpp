#include<iostream>
#include<vector>
#include<queue>

using namespace std;

/*
 Given a sorted, we need to build a BST out of it.
*/

class Node{
public:
    int data;
    Node *left,*right;
    Node(int data){
        this->data = data;
        left=right= NULL;
    }
};

// Function to convert sorted array to BST
Node* sortedToBST(vector<int> num,int s,int e){
    if(s > e){
        return NULL;
    }
    int mid = (s+e)/2;
    Node* root = new Node(num[mid]);
    root->left = sortedToBST(num,s,mid-1);
    root->right = sortedToBST(num,mid+1,e);
    return root;
}

// Printing the level order traversal
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

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    Node* root = sortedToBST(v,0,v.size()-1);
    LevelOrder(root);
    return 0;
}

// Output : 5->2->8->1->3->6->9->4->7->10->
/*
             5
           /  \
          2     8
        /  \   /  \
       1   3  6    9
            \  \    \
            4   7   10
*/