#include<iostream>
using namespace std;

// Functions are set of code which perform something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times

// void --> Doesn't return anything
// return --> Returns some kind of data
// parameterised --> Does take some kind of input
// non-parameterised --> Doesn't take any input

// pass by value --> The function takes in a copy value of the original value
// and sends the copy in the function. The changes that we have made to the 
// value within the function is changes on the copy and not the original value.
// Therefore, if we print the value within outside the function, it prints the
// original value without any changes. It works for all datatypes.
void dosomething(int n){
    cout << n << endl;
    n += 5;
    cout << n << endl;
    n+= 5;
    cout << n << endl;
}
// pass by reference --> The function takes in the original value and makes the 
// changes on the original value. When we print the value outside the function
// we get the updated value as the original value is updated not any copy.
// Works for all datatypes. To use pass by reference add '&' sign before the parameter.
void dosomethingagain(int &n){
    cout << n << endl;
    n += 10;
    cout << n << endl;
    n+= 10;
    cout << n << endl;
}
int main(){
    int a, b;
    cin >> a >> b;
    dosomething(a);
    cout << a << endl << endl;
    dosomethingagain(b);
    cout << b << endl;
    return 0;
}

// IMPORTANT --> Arrays always goes by pass by reference with or without '&' sign