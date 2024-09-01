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
    sort(arr,arr+n);
    int low = 0, high = arr[n-1] - arr[0];
    while (low <= high){
        int mid = (low+high)/2;
        int cnt = 1, last = arr[0];
        for (int i = 1; i < n; i++){
            if (arr[i] - last >= mid){
                cnt++;
                last = arr[i];
            }
            if (cnt >= k) break;
        }
        if (cnt >= k) low = mid+1;
        else high = mid-1;
    }
    cout << high << endl;
}