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

Node* removeDuplicates(Node* head){
    Node* temp = head;
    while (temp && temp->next){
        Node* nextNode = temp->next;
        while (nextNode && temp->data == nextNode->data){
            Node* duplicate = nextNode;
            nextNode = nextNode->next;
            free(duplicate);
        }
        temp->next = nextNode;
        if (nextNode) nextNode->back = temp;
        temp = temp->next;
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
    Node* head = converArr2Dll(arr, n);
    Node* head = removeDuplicates(head);
}