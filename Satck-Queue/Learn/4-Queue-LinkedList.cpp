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

class Queue{
    Node* start;
    Node* end;
    int size;

    public:
    Queue(){
        start = NULL;
        end = NULL;
        size = 0;
    }

    void push(int x){
        Node* temp = new Node(x);
        if (start == NULL){
            start = temp;
            end = temp;
        }
        else{
            end->next = temp;
            end = temp;
        }
        size++;
    }

    void pop(){
        if (start == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = start;
        start = start->next;
        delete temp;
        size--;
    }

    int top(){
        if (start == NULL){
            cout << "Queue is empty" << endl;
            exit(1);
        }
        return start->data;
    }

    int len(){
        return size;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4); 
    q.push(5);  
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    cout << q.len() << endl; 
}