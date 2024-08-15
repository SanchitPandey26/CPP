#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int low = 0, high = n -1, ans = INT_MAX, index = -1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[low] <= arr[high]){
            if (arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            break;
        }
        if (arr[low] <= arr[mid]){
            if (arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            low = mid+1;
        }
        else{
            if (arr[mid] < ans){
                index = mid;
                ans = arr[mid];
            }
            high = mid-1;
        }
    }
    cout << index << endl;
}