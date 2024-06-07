#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (n == 1) cout << arr[0];
    else {
        int max = arr[0];
        for (int i = 0; i < n; i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
        cout << max;
    }
}