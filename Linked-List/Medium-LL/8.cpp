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

Node* oddEvenList(Node* head) {
        if (head == NULL || head->next == NULL) return head;
        Node* oddHead = new Node(-1);
        Node* evenHead = new Node(-1);
        Node* evenTail = evenHead;
        Node* oddTail = oddHead;
        Node* temp = NULL;
        Node* curr = head;
        int count = 0;
        while (curr){
            temp = curr;
            curr = curr->next;
            temp->next = nullptr;
            count++;
            if (count & 1){
                oddTail->next = temp;
                oddTail = temp;
            }
            else{
                evenTail->next = temp;
                evenTail = temp;
            }
            temp = temp->next;

        }
        oddTail->next = evenHead->next;
        return oddHead->next;
    }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = convertArr2LL(arr,n);
    cout << oddEvenList(head);
}