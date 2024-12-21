#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

int depth(Node* root){
    if (root == NULL) return 0;
    int l = depth(root->left);
    int r = depth(root->right);

    return 1 + max(l,r);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << depth(root) << endl;
}