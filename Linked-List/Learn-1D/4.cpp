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

Node* removeHead(Node* head){
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if (head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while (temp->next->next){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteK(Node* head, int k){
    if (head == NULL) return head;
    if (k == 1) return removeHead(head);
    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while (temp){
        cnt++;
        if (cnt == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteEl(Node* head, int el){
    if (head == NULL) return head;
    if (el == head->data) return removeHead(head);
    Node* temp = head;
    Node* prev = nullptr;
    while (temp){
        if (temp->data == el){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;

    Node* head = convertArr2LL(arr,n);
    printLL(head);
    //head = removeHead(head);
    //head = deleteTail(head);
    //head = deleteK(head, k);
    head = deleteEl(head, k);
    printLL(head);
}