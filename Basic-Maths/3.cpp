#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, r = 0;
    cin >> n;
    while (n){
        if (r < INT_MIN/10 || r > INT_MAX/10){
            r = 0;
            break;
        }
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << r;
    return 0;

}