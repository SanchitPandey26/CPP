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

Node* deleteAllOccurOfX(Node* head, int x){
    if (head == NULL) return head;
    Node* curr = head;
    while (curr){
        if (curr->data == x){
            if (head == curr) head = curr->next;
            Node* nextNode = curr->next;
            Node* prevNode = curr->back;
            if (prevNode) prevNode->next = prevNode;
            if (nextNode) nextNode->back = nextNode;
            free(curr);
            curr = nextNode;
        }
        else curr = curr->next;
    }
    return head;
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
    head = deleteAllOccurOfX(head, x);
}