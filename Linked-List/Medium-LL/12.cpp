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

Node* segregate(Node* head) {
    if (head == NULL || head->next == NULL) return head;
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneTail = oneHead;
    Node* twoTail = twoHead;
    Node* temp = NULL;
    Node* curr = head;
    while (curr){
        temp = curr;
        curr = curr->next;
        temp->next = nullptr;
        if (temp->data == 0){
            zeroTail->next = temp;
            zeroTail = zeroTail->next;
        }
        else if (temp->data == 1){
            oneTail->next = temp;
            oneTail = oneTail->next;
        }
        else{
            twoTail->next = temp;
            twoTail = twoTail->next;
        }
        temp = temp->next;
    }
    zeroTail->next = (oneHead->next) ? oneHead->next : twoHead->next;
    oneTail->next = twoHead->next;
    Node* newHead = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newHead;
    }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = convertArr2LL(arr,n);
    cout << segregate(head);
}