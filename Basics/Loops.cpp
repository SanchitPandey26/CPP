#include<iostream>
using namespace std;

int main(){
    // for loop
    cout << "For Loop starts\n";
    for (int i = 1; i<=10; i++){
        cout << "Sanchit " << i << endl;
    }
    cout << "For Loop ends\n\n";

    // while loop
    cout << "While loops starts\n";
    int i = 1;
    while (i <= 10){
        cout << "Sanchit " << i << endl;
        i++;
    }
    cout << "While loop ends\n";

    //do while loop
    cout << "Do While loop starts\n";
    int n = 2;
    do {
        cout << "Test " << n << endl;
    } while (n < 1 );
    cout << "Do While loop ends";
    return 0;
}