#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
    Node(int d, Node* ne){
        data = d;
        next = ne;
    }
};

Node* convertArr2LL(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int searchLL(Node* head, int val){
    Node* temp = head;
    while (temp){
        if (temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    
    Node* head = convertArr2LL(arr, n);

    if (searchLL(head, k)) cout << "True" << endl;
    else cout << "False" << endl; 
}