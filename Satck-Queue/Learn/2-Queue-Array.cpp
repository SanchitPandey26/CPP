#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int start, end, currSize, maxSize;

    public:
    Queue(){
        arr = new int[16];
        start = -1;
        end = -1;
        currSize = 0;
        maxSize = 16;
    }

    Queue(int size){
        maxSize = size;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }

    void push(int x){
        if (currSize == maxSize){
            cout << "Queue is full" << endl;
            exit(1);
        }
        if (start == -1){
            start = 0;
            end = 0;
        }
        else end = (end+1) % maxSize;
        arr[end] = x;
        currSize++;
    }

    void pop(){
        if (start == -1){
            cout << "Stack is empty" << endl;
            return;
        }
        if (currSize == 1){
            start = -1;
            end = -1;
        }
        else start = (start+1) % maxSize;
        currSize--;
    }

    int top(){
        if (start == -1){
            cout << "Stack is empty" << endl;
            exit(1);
        }
        return arr[start];
    }

    int size(){
        return currSize;
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
    cout << q.size() << endl; 
}