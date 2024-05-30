#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = true;
    if (n == 0 || n == 1) flag = false;
    else{
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0){
                flag = false;
                break;
            }
        }
    }
    if (flag) cout << "True";
    else cout << "False";

}