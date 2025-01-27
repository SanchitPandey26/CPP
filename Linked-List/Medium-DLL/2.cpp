#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* converArr2Dll(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++){
        Node* temp = new Node(arr[i], nullptr, mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printDll(Node* head){
    Node* temp = head;
    while (temp){
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

vector<pair<int,int>> findPairsWithGivenSum(Node* head, int x){
    vector<pair<int,int>> ans;
    Node* right = head;
    while (right->next) right = right->next;
    Node* left = head;
    while(left->data < right->data){
        int sum = left->data + right->data;
        if (sum == x){
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->back;
        }
        else if (sum > x) right = right->back;
        else left = left->next;
    }
    return ans;
}

int main(){
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;
    Node* head = converArr2Dll(arr, n);
    vector<pair<int,int>> ans = findPairsWithGivenSum(head, x);
}