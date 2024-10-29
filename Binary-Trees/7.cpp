#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> inorder(Node* root){
    vector<int> inorder;
    if (root == NULL) return inorder;

    stack<Node*> st;
    while(true){
        if (root != NULL){
            st.push(root);
            root = root->left;
        }
        else{
            if (st.empty()) break;
            root = st.top();
            st.pop();
            inorder.push_back(root->data);
            root = root->right;
        }
    }
    return inorder;
    
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    inorder(root);
}