#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;   
    Node* next;      

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* reverseLinkedList(Node *head)
{
   Node* temp = head;  
   Node* prev = NULL;  
   while(temp != NULL){  
       Node* front = temp->next;  
       temp->next = prev;  
       prev = temp;  
       temp = front; 
   }
   return prev;  
}

Node* getKthNode(Node* temp, int k){
    
}

Node* kReverse(Node* head, int k){

}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(9);
    head->next->next->next->next->next = new Node(2);

    cout << "Original Linked List: ";
    printLinkedList(head);

    head = kReverse(head, 4);

    cout << "Reversed Linked List: ";
    printLinkedList(head);
}