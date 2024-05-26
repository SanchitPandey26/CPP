#include<utility>
#include <iostream>
using namespace std;

int main(){
    pair<int, int> p = {1,3};  // In pair we can store two values of any data type
    cout << p.first << ' ' << p.second << endl;
    pair<int, pair<int,int>> p1 = {1,{2,3}};  // To store more than two values we can use nested pairs
    cout << p1.first << ' ' << p1.second.first << ' ' << p1.second.second << endl;
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].first;
}

