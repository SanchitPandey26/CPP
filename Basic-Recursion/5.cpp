#include<bits/stdc++.h>
using namespace std;

int print(int num){
    if (num == 0) return 1;
    return num * print(num-1);
}
int main() {
    int n;
    cin >> n;
    cout << print(n);
}