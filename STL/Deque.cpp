#include <bits/stdc++.h>
using namespace std;

int main(){
    // Deque is exactly similar to list and vector. Elements can be inserted anywhere, and can
    // be accessed easily without compromising on time complexity.

    deque<int> d; // Decalration of deque

    d.push_back(2); // {2}
    d.emplace_back(4); // {2,4}

    d.push_front(1); // {1,2,4}
    d.emplace_front(3); //{3,1,2,4}

    d.pop_back(); // {3,1,2}
    d.pop_front(); // {1,2}

    d.back(); // returns the last element;
    d.front(); // returns the first element;

    // rest of the functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap
}