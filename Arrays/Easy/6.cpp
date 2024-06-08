#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    if (k == 0 || n == 1){
        for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    }
    else{
        if (k > n) k %= n;
        reverse(arr + n - k, arr + n);
        reverse(arr, arr + n - k);
        reverse(arr, arr + n);

        for (int i = 0; i < n; i++){
            cout << arr[i] << ' ';
        }
    }
}