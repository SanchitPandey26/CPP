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
    int low = *max_element(arr,arr+n), high = accumulate(arr, arr+n , 0);
    while (low <= high){
        int mid = (low+high)/2;
        int ans = 0, days = 1;
        for (int i = 0; i < n; i++){
            ans += arr[i];
            if (ans > mid){
                days++;
                ans = arr[i];
            }
        }
        if (days <= k) high = mid - 1;
        else low = mid + 1;
    }
    cout << low << endl;
}