#include<iostream>
#include<array>
using namespace std;

int main(){
    /*
    // 1D Array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] = 16;
    cout << arr[3] << endl;

    // 2D Array
    int array[3][5];
    array[1][3] = 15;
    cout << array[1][3] << endl;
    return 0;
    */
   
    // Taking input in array from user and printing the output
    int arry[5];
    for (int i = 0; i < 5; i++){
        cin >> arry[i];
    }
    for (int i = 0; i < 5; i++){
        cout << arry[i] << ' ';
    }
    
}

// Strings indexing is similar to 1D array indexing
// To get the length of string defined by variable s,
// we use s.size(). To fetch the value at a paticular 
// index in a string use s[index].