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

Node* removeNthFromEnd(Node* head, int n) {
        if (head == NULL) return head;
        Node* fast = head;
        Node* slow = head;
        for (int i = 0; i < n; i++){
            fast = fast->next;
        }
        if (fast == NULL) return head->next;
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        Node* temp = slow->next;
        slow->next = temp->next;
        temp->next = nullptr;
        delete temp;
        return head;

    }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = convertArr2LL(arr,n);
    int x;
    cin >> x;
    cout << removeNthFromEnd(head, x);
}