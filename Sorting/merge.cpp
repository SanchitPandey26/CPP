#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int temp[high+1];
    int left = low;
    int right = mid+1;
    int i = 0;
    while(left <= mid && right <= high){
        if (arr[left] < arr[right]){
            temp[i] = arr[left];
            left++;
            i++;
        }
        else {
            temp[i] = arr[right];
            right++;
            i++;
        }
    }
    while (left<=mid){
        temp[i] = arr[left];
        left++;
        i++;
    }
    while (right<=high){
        temp[i] = arr[right];
        right++;
        i++;
    }
    for (int j = low; j <= high; j++){
        arr[j] = temp[j-low];
    }

}

void ms(int arr[], int low, int high){
    if (low >= high) return;
    int mid = (low + high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    ms(arr,0,n-1);
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}

// Time complexity of merge sort is O(n log(base 2) n).
// Space complexity is O(n) excluding the recursionn stack space which is of O(n).