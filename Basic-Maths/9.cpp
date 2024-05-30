#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a = n1, b = n2;
    while (a>0 && b>0){
        if (a > b) a %= b;
        else b %= a;
    }
    if (a==0) cout << b;
    if (b==0) cout << a;

}