#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t = n, digit, sum = 0;
    while (t > 0){
        digit = t % 10;
        sum += digit*digit*digit;
        t /= 10;
    }
    if (sum == n) cout << "Yes";
    else cout << "No";
    return 0;

}