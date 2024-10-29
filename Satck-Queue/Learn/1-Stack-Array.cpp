#include<bits/stdc++.h>
using namespace std;

class Stack{
    int* arr;
    int tp;

    public:
    Stack(){
        tp = -1;
        arr = new int[10000];
    }

    void push(int x){
        tp++;
        arr[tp] = x;
    }

    void pop(){
        if (tp == -1){
            cout << "Stack is empty" << endl;
            return;
        }
        tp--;
    }

    int top(){
        return arr[tp];
    }

    int size(){
        return tp+1;
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
    cout << s.size() << endl; 
}