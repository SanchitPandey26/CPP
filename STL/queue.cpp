
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Queue follows FIFO property, i.e, First in First Out. That means we access only the
    // element first inserted into the queue.

    queue<int> q; // Decalration of stack

    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;

    cout << q.back() << endl; // prints 9, 4+5=9
    // q is {1,2,9}

    cout << q.front() << endl; // prints 1

    q.pop(); // removes the first inserted element. {2,9}

    // swap size empty same as stack


    // All operations of queue occur in O(1) time complexity.


}