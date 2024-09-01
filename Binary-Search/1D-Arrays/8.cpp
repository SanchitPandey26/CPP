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

    int low = 0, high = n -1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == k){
            cout << mid << endl;
            return 1;
        }
        if (arr[low] <= arr[mid]){
            if (arr[low] <= k && arr[mid] >= k) high = mid-1;
            else low = mid+1;
        }
        else{
            if (arr[mid] <= k && arr[high] >= k) low = mid+1;
            else high = mid-1; 
        }
    }
    cout << -1 << endl;
}