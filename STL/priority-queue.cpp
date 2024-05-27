#include <bits/stdc++.h>
using namespace std;

int main(){
    // In priority queue the largest element stays at the top. The data is store in tree fromat.

    priority_queue<int> pq;         // Declaration of priority queue

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others 

    // Minimum Heap --> Stores minimum element at the top

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    pq.top(); // prints 2


    // push and pop happens in log n and top happens in O(1).
}