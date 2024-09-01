#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> h;
    int low = 1, high = *max_element(arr,arr+n);
    while (low <= high){
        int mid = (low+high)/2;
        int total = 0;
        for (int i = 0; i < n; i++){
            total += ceil((double) arr[i]/ (double) mid);
        }
        if (total <= h) high = mid - 1;
        else low = mid + 1;
    }
    cout << low << endl;
}