#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (n < 2) cout << -1;
    else{
        int max = arr[0], secondMax = INT_MIN;
        for (int i = 0; i < n; i++){
            if (arr[i] > max && arr[i] > secondMax){
                secondMax = max;
                max = arr[i];
            }
            else if (arr[i] > secondMax && arr[i] < max){
                secondMax = arr[i];
            }
        }

        if (secondMax == INT_MIN){
            cout << -1;
        }
        else {
            cout << secondMax;
        }
    }
}