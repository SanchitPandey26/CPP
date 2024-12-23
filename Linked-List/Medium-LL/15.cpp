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

Node* addTwoNumbers(Node *l1, Node *l2) {
    Node* result = new Node(-1);
    Node* temp = result;
    int carry = 0;
    while (l1 || l2 || carry){
        int sum = carry;
        if (l1){
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2){
            sum += l2->data;
            l2 = l2->next;
        }
        Node* newNode = new Node(sum % 10);
        carry = sum / 10;
        temp->next = newNode;
        temp = temp->next;
    }
    return result->next;
}

int main(){
    int a, b;
    cin >> a;
    int arr1[a];
    for (int i = 0; i < a; i++){
        cin >> arr1[i];
    }
    cin >> b;
    int arr2[b];
    for (int i = 0; i < b; i++){
        cin >> arr2[i];
    }

    Node* head1 = convertArr2LL(arr1,a);
    Node* head2 = convertArr2LL(arr2,b);
    cout << addTwoNumbers(head1, head2);
}