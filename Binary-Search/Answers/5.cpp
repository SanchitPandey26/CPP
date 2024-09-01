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
    int low = 1, high = *max_element(arr, arr+n);
    while (low <= high){
        int mid = (low+high)/2;
        int ans = 0;
        for (int i = 0; i < n; i++){
            ans += ceil((double) arr[i]/ (double) mid);
        }
        if (ans <= k) high = mid - 1;
        else low = mid + 1;
    }
    cout << low << endl;
}