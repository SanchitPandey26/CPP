#include <bits/stdc++.h>
using namespace std;

int main(){
    // Stack follows LIFO property, i.e, Last in First Out. That means we access only the
    // element last inserted into the stack, and not in middle or the beggining

    stack<int> s; // Decalration of stack

    s.push(1); // {1}
    s.push(2); // {2,1}
    s.push(3); // {3,2,1}
    s.push(3); // {3,3,2,1}
    s.emplace(5); // {5,3,3,2,1}

    cout << s.top(); // prints 5. 5 is still remains in the stack
    // We cannot access elements using indexing.

    s.pop(); // {3,3,2,1}. It deletes the last input element.

    cout << s.top(); // Prints 3, as that is cuurently the topmost element in stack

    cout << s.size(); // prints 4, the number of elements currently in stack

    cout << s.empty(); // prints false, as the stack still has elements in it

    stack<int> s1, s2;
    s1.swap(s2); // swaps the values of the stack

    // All operations of stack occur in O(1) time complexity.


}