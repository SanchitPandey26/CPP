#include<bits/stdc++.h>
using namespace std;

int print(int num){
    if (num == 0) return 0;
    else if (num == 1) return 1;
    return print(num-1) + print(num-2);
}
int main() {
    int n;
    cin >> n;
    cout << print(n);
}