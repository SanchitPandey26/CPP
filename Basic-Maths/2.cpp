#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, digit, count = 0;
    cin >> n;
    int t = n;

    while (t > 0){
        digit = t % 10;
        if (digit != 0){
            if (n % digit == 0){
                count++;
            }
        }
        t /= 10;

    }
    cout << count;
    return 0;

}