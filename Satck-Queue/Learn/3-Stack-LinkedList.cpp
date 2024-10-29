#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

class Stack{
    Node* tp;
    int size = 0;

    public:
    Stack(){
        tp = NULL;
        size = 0;
    }

    void push(int x){
        Node* temp = new Node(x);
        temp->next = tp;
        tp = temp;
        size++;
    }

    void pop(){
        if (tp == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = tp;
        tp = tp->next;
        delete temp;
        size--;
    }

    int top(){
        return tp->data;
    }

    int len(){
        return size;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(10); 
    s.push(5);  
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.len() << endl; 
}