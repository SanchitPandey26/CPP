#include<bits/stdc++.h>
using namespace std;

int candy(vector<int>& arr) {
    int sum = 1, i = 1, n = arr.size();
    while (i < n){
        if (arr[i] == arr[i-1]){
            sum++;
            i++;
            continue;
        }
        int peak = 1;
        while (i < n && arr[i] > arr[i-1]){
            peak++;
            sum += peak;
            i++;
        }
        int down = 0;
        while (i < n && arr[i] < arr[i-1]){
            down++;
            sum += down;
            i++;
        }
        if (down > peak) sum += down - peak;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << candy(arr);
}