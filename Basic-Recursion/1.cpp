#include<bits/stdc++.h>
using namespace std;

void print(int num){
    if (num <= 0) return;
    cout << "Hey" << ' ';
    print(num-1);

}
int main() {
    int n;
    cin >> n;
    print(n);
}