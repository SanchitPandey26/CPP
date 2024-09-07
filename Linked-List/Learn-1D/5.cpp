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

Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

Node* insertTail(Node* head, int val){
    if (head == NULL) return new Node(val);
    Node* temp = head;
    while (temp->next){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertK(Node* head, int val, int k){
    if (head == NULL) return new Node(val);
    if (k == 1) return new Node(val, head);
    int cnt = 0;
    Node* temp = head;
    while (temp){
        cnt++;
        if (cnt == k-1){
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertEl(Node* head, int val, int el){
    if (head == NULL) return NULL;
    if (el == head->data) return new Node(val, head);
    Node* temp = head;
    while (temp->next){
        if (temp->next->data == el){
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    int n, val, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> val >> k;

    Node* head = convertArr2LL(arr,n);
    printLL(head);
    //head = insertHead(head, k);
    //head = insertTail(head, k);
    //head = insertK(head, val, k);
    head = insertEl(head, val, k);
    printLL(head);
}