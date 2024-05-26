#include <bits/stdc++.h>
using namespace std;

int main(){
        vector<int> v; // Declares an empty vector

        v.push_back(1);  // Increases the size of the vector and adds 1 to it
        v.emplace_back(2); // Similar to pus_back but faster than it.

        vector<pair<int,int>> vec;

        vec.push_back({1,2}); // Need to write the element in pair form as our datatype for vector is pair
        vec.emplace_back(1,2); // It automatically understands that it is a pair

        vector<int> v(5,100); // 5 is the initial size of vector and 100 is the element; {100,100,100,100,100}

        vector<int> v[5]; // A vector of initial size 5 is created with any garbage value

        vector<int> v1(5,20);
        vector<int> v2(v1); // Another vector v3 is created which is copy of v2

        // Accessing elements in vector is similar to array or using v.at(index)

        // We can also access elements using an iterator

        vector<int>::iterator it = v.begin(); // Points to the memory address of first element of vector v

        it++; // points to next elements memory address
        cout << *(it) << ' '; // *() used to print anything stored at the particular address

        it = it+2;
        cout << *(it) << ' ';

        vector<int>::iterator it = v.end(); // Points to the memory address right after the last element. Last element can be accessed using it--
        vector<int>::reverse_iterator it = v.rend(); // Points to the memory address right before the first element of vector
        vector<int>::reverse_iterator it = v.rbegin(); // Points to the memory address of the last element of vector. If use it++ it moves in reverse order, i.e, the second last element of the vector

        // v.back() returns the last element of vector

        // Printing all the elements of a vector
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
            cout << *(it) << ' ';
        }

        for (auto it = v.begin(); it != v.end(); it++){ // automatically assigns the datatype
            cout << *(it) << ' ';
        }

        for (auto x: v){        // For each loop, prints the elements of vector
            cout << x << ' ';
        }

        // Functions of vector

        v.erase(v.begin()+2); // Takes in the memory address of the element to erase

        v.erase(v.begin()+1, v.begin()+3); // Takes in the memory address of the start element till the end element, end element is not deleted. [start,end)
        
        v.insert(v.begin(), 300); // Inserts 300 at the start. Takes in the memory address of index to insert and the element to insert.
        v.insert(v.begin()+1,2,10); // Inserts 10 at the second and third position. Takes in the memory address of index, the number of times, and the element to be inserted.

        vector<int> copy(2,100);
        v.insert(v.begin(),copy.begin(), copy.end()); // Inserts the entitre copy vector in v vector from the start. Can also give a portion of vector to be inserted

        cout << v.size(); // return the number of elements in the vector

        v.pop_back(); // removes the last element from the vector

        // v1 --> {10,20}
        // v2 --> (1,2)
        v1.swap(v2); // v1 --> {1,2}; v2 --> {10,20}

        v.clear(); // erases the entire vector

        cout << v.empty(); // returns true if the vector is empty


}

