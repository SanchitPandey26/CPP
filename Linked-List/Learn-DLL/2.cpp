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

Node* deleteHead(Node* head){
    if (head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;

}

Node* deleteTail(Node* head){
    if (head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->back->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

Node* deleteK(Node* head, int k){
    if (head == NULL) return head;
    else if (k == 1) return deleteHead(head);
    int cnt = 0;
    Node* temp = head;
    while (temp){
        cnt++;
        if (cnt == k) break;
        temp = temp->next;
    }
    if (temp->next == NULL) deleteTail(head);
    temp->back->next = temp->next;
    temp->next->back = temp->back;
    delete temp;
    return head;
}

Node* deleteEl(Node* head, int val){
    Node* temp = head;
    while(temp){
        if (temp->data == val){
            if (temp->next != NULL){
                temp->back->next = temp->next;
                temp->next->back = temp->back;
            }
            else{
                temp->back->next = nullptr;
                temp->back = nullptr;
            }
            delete temp;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    int n , k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;

    Node* head = converArr2Dll(arr, n);
    printDll(head);

    //head = deleteHead(head);
    //head = deleteTail(head);
    //head = deleteK(head, k);
    //head = deleteEl(head, k);
    printDll(head);
}