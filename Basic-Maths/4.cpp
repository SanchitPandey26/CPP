#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, r = 0;
    cin >> n;
    int x = n;
    if ( n < 0) cout << "False";
    else{
        while (n){
        r = r * 10 + n % 10;
        n /= 10;
        }
        if (x == r) cout << "True";
        else cout << "False";
    }
    return 0;

}