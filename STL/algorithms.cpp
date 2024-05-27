#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int>p2){
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // they are same
    if (p1.first > p2.first) return true;
    return false;
}

int main(){
    // We can use sort on almost all conatiners except map, to sort in desired manner.

    vector<int> v;
    sort(v.begin(), v.end()); // Sorts the vector in ascending order

    sort(v.begin(), v.end(), greater<int>()); // sorts the vector in descending order 

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    // sort it according to second element but if second element is same, then sort 
    // according to first element but in decreasing order.

    int n = sizeof(a);
    sort(a, a+n, comp);
    // {{4,1},{2,1},{1,2}}

    int num = 7;
    int cnt = __builtin_popcount(num); // returns the number of 1s in binary value of the number

    long long num = 1234567890; 
    int cnt = __builtin_popcountll(num);

    string s = "123";
    sort(s.begin(), s.end()); // Necessary to sort as if not sorted it print less permutarions
    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end())); // prints all the permutation possible

    int b[] = {1,2,3,4,5};
    int n1 = sizeof(b);
    int maxi = *max_element(b,b+n1); // returns the max element of the array
    int mini = *min_element(b,b+n1); // returns the min element of the array

    
}