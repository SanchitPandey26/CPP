#include<bits/stdc++.h>
using namespace std;

struct Queue{
    stack<int> s1, s2;

    void Push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void Pop(){
        s1.pop();
    }

    int Top(){
        return s1.top();
    }

    int len(){
        return s1.size();
    }
};

int main(){
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(10); 
    q.Push(5);  
    cout << q.Top() << endl;
    q.Pop();
    cout << q.Top() << endl;
    cout << q.len() << endl; 
}