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

Node* getIntersectionNode(Node *headA, Node *headB) {
    if (!headA || !headB) return NULL;
    Node* temp1 = headA;
    Node* temp2 = headB;
    while (temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
        if (temp1 == temp2) return temp1;
        if (!temp1) temp1 = headB;
        if (!temp2) temp2 = headA;
    }
    return temp1;
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
    cout << getIntersectionNode(head1, head2);
}