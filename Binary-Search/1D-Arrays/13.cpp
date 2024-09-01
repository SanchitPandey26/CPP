#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if (n==1){
        cout << 0 << endl;
        return 1;
    }
    int low = 0, high = n -1;
    if (arr[0] > arr[low]) {
        cout << 0 << endl;
        return 1;
    }
    if (arr[n-1] > arr[high]) {
        cout << n-1 << endl;
        return 1;
    }
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            cout << mid << endl;
            return 1;
        }
        if (arr[mid] > arr[mid-1]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }
    cout << -1 << endl;
}