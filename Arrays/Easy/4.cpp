#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if (n == 1) cout << "True";
    else{
        int count = 0;
        for (int i = 0; i < n-1; i++){
            if (arr[i] > arr[i+1]) count++;
        }
        if (arr[0] < arr[n-1]) count++;
        if (count > 1) cout << "False";
        else cout << "True";
    }
}