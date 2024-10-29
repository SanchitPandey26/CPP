#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;

    public:
    
    void Push(int x){
        int n = q.size();
        q.push(x);
        for (int i = 0; i < n; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void Pop(){
        q.pop();
    }

    int top(){
        return q.front();
    }

    int len(){
        return q.size();
    }
};

int main(){
    Stack s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(10); 
    s.Push(5);  
    cout << s.top() << endl;
    s.Pop();
    cout << s.top() << endl;
    cout << s.len() << endl; 
}