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

Node* insertHead(Node* head, int val){
    Node* newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;

}

Node* insertTail(Node* head, int val){
    if (head->next == NULL) return insertHead(head, val);
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

Node* insertK(Node* head, int val, int k){
    if (k == 1) return insertHead(head, val);
    int cnt = 0;
    Node* temp = head;
    while (temp){
        cnt++;
        if (cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode; 
    return head;
}

Node* insertEl(Node* head, int val, int k){
    Node* temp = head;
    while(temp){
        if (temp->data == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

int main(){
    int n, val, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k >> val; 

    Node* head = converArr2Dll(arr, n);
    printDll(head);

    //head = insertHead(head, k);
    //head = insertTail(head, k);
    //head = insertK(head, val, k);
    head = insertEl(head, val, k);
    printDll(head);
}