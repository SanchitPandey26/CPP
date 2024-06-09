#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int j = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] == 0 && arr[i-1] != 0) j = i;
        if (arr[i] != 0 && arr[j] == 0){
            swap(arr[j],arr[i]);
            j++;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}