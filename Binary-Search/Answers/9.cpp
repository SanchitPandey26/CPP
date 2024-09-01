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
    if (k > n){
        cout << -1 << endl;
        return 1;
    }
    int low = *max_element(arr,arr+n), high = accumulate(arr,arr+n,0);
    while(low<=high){
        int mid = (low+high)/2;
        int cnt = 1, sum = 0;;
        for (int i = 0; i < n; i++){
            if (arr[i] + sum <= mid) sum += arr[i];
            else{
                cnt++;
                sum = arr[i];
            }
        }
        if (cnt > k) low = mid+1;
        else high = mid-1;
    }
    cout << low << endl;
}