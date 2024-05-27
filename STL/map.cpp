#include <bits/stdc++.h>
using namespace std;

int main(){
    // It stores data in key value pair. The key and values can be of any data type. Keys are
    // unique in sorted order, whereas the values can be repeated.

    map<int,int> m; // Decalaration of map
    map<int, pair<int,int>> mp; 
    map<pair<int,int>,int> mpp;

    m[1] = 2;  // {{1,2}}
    m.emplace(3,1); // {{1,2},{3,4}}
    m.insert({2,4}); // {{1,2},{2,4},{3,4}}

    mpp[{2,3}] = 10;

    for (auto it: m){
        cout << it.first << ' ' << it.second << endl;
    }

    cout << m[1] << endl; // prints 2, i.e, the value for the respective key
    cout << m[5]; // prints 0, as there is no key with value 5;

    auto it = m.find(3); // Returns the memory address of the respective key-value pair.
    cout << (*it).second; // prints the value for the respective key

    auto it = m.find(5); // It points to the memory address right after the last element as, 5 is not a key in map.

    // lower_bound, upper_bound, size, swap, empty are same.
    // works in lograithmic time.
   
}