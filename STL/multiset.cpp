#include <bits/stdc++.h>
using namespace std;

int main(){
    // Everything is the same as set, except it can store duplicate elements also

    multiset<int> ms; // Declaration of multiset

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all occurences of 1 is erased

    int cnt = ms.count(1); // returns the number of 1s in the multiset

    // {1,1,1,1}
    ms.erase(ms.find(1)); // erases only one occurence of 1; {1,1,1}

    ms.erase(ms.find(1), next(ms.find(1),2)); // removes two occurence of 1

   
}