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

Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* mergeTwoLinkedList(Node* list1, Node* list2){
    Node* result = new Node(-1);
    Node* temp = result;

    while(list1 && list2){
        if (list1->data < list2->data){
            temp->next = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }
    if (list1) temp->next = list1;
    else temp->next = list2;

    return result->next;
}

Node* sortLL(Node* head){
    if (head == NULL || head->next == NULL) return head;
    Node* left = head;
    Node* middle = findMiddle(head);
    Node* right = middle->next;
    middle->next = nullptr;

    left = sortLL(left);
    right = sortLL(right);

    return mergeTwoLinkedList(left, right);

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = convertArr2LL(arr,n);
    sortLL(head);
}