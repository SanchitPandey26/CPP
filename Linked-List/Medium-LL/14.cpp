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

void printLL(Node* head){
    Node* temp = head;
    while (temp){
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

int help(Node* head){
    if (!head) return 1;
    int carry = help(head->next);
    head->data += carry;
    if (head->data < 10) return 0;
    head->data = 0;
    return 1;
}

Node* addOne(Node* head) {
    int carry = help(head);
    if (carry == 1){
        Node* newHead = new Node(1, head);
        return newHead;
    }
    return head;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = convertArr2LL(arr,n);
    addOne(head);
}