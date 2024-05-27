#include <bits/stdc++.h>
using namespace std;

int main(){
    // Set stores all the elements in sorted oerder and all the elements are unique.

   set<int> st; // Declaration of set

   st.insert(1); // {1}
   st.emplace(2); // {1,2}
   st.insert(2); // {1,2}
   st.insert(4); // {1,2,4}
   st.insert(3); // {1,2,3,4}

   // Functionality of insert in vector can be used also, that only increases efficiency.

   // begin(), end(), rbegin(), rend(), size(), empty() and swap() are similar to vector.

   // {1,2,3,4,5}
   auto it = st.find(3); // Returns an iterator which points to the memory address of 3

   auto it = st.find(6); // Returns an iterator which points to the memory address right after to the last element

   st.erase(5); // removes 5 from the set. Takes logarithmic time

   int cnt = st.count(1); // it returns 1 if the element exists as it is unique and 0 if it doesnt exists

   auto it = st.find(3);
   st.erase(it); // takes constant time

   // {1,2,3,4,5}
   auto it1 = st.find(2);
   auto it2 = st.find(4);
   st.erase(it1, it2); // erases 2 and 3; [start, end)

   auto it = lower_bound(st.begin(), st.end(), 3); // returns a memory address of element equal to or just greater than 3.
   // If 3 is not in set and any number greater than 3 is also not in set, it returns the memory address of element right after the last element.

   auto it = upper_bound(st.begin(), st.end(), 3); // returns a memory address of element just greater than 3. If the set doesn't contain any
   // number greater than 3 it returns the memory address right after the last element.

   // in set all operations occur in log(n) time complexity
}