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
        if (arr[j] != arr[i]){
                j++;
                arr[j] = arr[i];
        }
    }
    cout << j + 1 <<  endl;

    for (int i = 0; i < j + 1; i++){
        cout << arr[i] << ' ';
    }
}