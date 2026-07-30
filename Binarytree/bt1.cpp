#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preOrder){
    idx++;

    if(preOrder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preOrder[idx]);
    root -> left = buildTree(preOrder);
    root -> right = buildTree(preOrder);

    return root;
}

//Pre-Order
void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << endl;
    preorder(root -> left);
    preorder(root -> right);
}


//In-Order
void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << endl;
    inorder(root -> right);
}

//post-order
//In-Order
void postorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    inorder(root -> right);
    cout << root -> data << endl;
}

int main(){
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preOrder);

    postorder(root);
    
    return 0;
}