#include <bits/stdc++.h>
using namespace std;

int findPartition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j){
        while (arr[i] <= pivot && i < high) i++;
        while (arr[j] > pivot && j > low) j--;
        if (i < j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int arr[], int low, int high){
    if (low < high){
        int pIndex = findPartition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    qs(arr,0,n-1);
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}

// Time complexity of quick sort is O(n log(base 2) n).
// Space complexity is O(1) excluding the recursionn stack space which is of O(n).