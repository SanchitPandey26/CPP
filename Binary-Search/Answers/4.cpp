#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> m >> k;
    if (m*k>n){
        cout << -1;
        return 1;
    }
    int low = *min_element(arr,arr+n), high = *max_element(arr,arr+n);
    while(low <= high){
        int mid = (low+high)/2;
        int count = 0, total = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] <= mid) count++;
            else{
                total += (count/k);
                count = 0;
            }
        }
        total += (count/k);
        if (total < m) low = mid + 1;
        else high = mid - 1;
    }
    cout << low << endl;
}