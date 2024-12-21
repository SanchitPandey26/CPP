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

int diameter(Node* root){
    int d = 0;
    depth(root, d);
    return d;
}

int depth(Node* root, int &d){
    if (root == NULL) return 0;
    int l = depth(root->left, d);
    int r = depth(root->right, d);
    d = max(d, l+r);
    return 1 + max(l,r);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << diameter(root) << endl;
}