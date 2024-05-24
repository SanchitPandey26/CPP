#include<iostream>
#include<string>
using namespace std;

int main(){
    // int --> Intgere DataType
    int b;
    // long --> Integr DataType with longer range
    long z = 15;
    cin >> b;
    long long a = 1500000000; // wider range

    // float, double --> Decimal DataTypes. Double has larger range.
    float x = 15.6;
    double y = 12; 
    cout << "Value of x: " << x << " and y: " << y;

    // string --> Strig DataType 
    string s1, s2;
    cin >> s1 >> s2;
    cout << "\n" << s1 << " " << s2;

    // getline --> Used to take the entire line of string as input
    string str;
    getline(cin, str);
    cout << str;

    // char --> Character Datatype; used to store a single character.
    char ch;
    cin >> ch;
    cout << ch;
    return 0;
}