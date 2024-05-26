#include <bits/stdc++.h>
using namespace std;

int main(){
    // List is similar to vector. The difference is that we can add elements in list from 
    // the end as well as the start. We can sue insert function in vector, but when compared
    // to push_front fuction of list, it has a very high time complexity

    list<int> ls; // Decalration of list

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(1); // {1,2,4}
    ls.emplace_front(); //{2,4}

    // rest of the functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap
}