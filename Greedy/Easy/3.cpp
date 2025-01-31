#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& arr, int v) {
    int n = arr.size();
    int count = 0;
    for (int i = n-1; i >= 0; i--){
        while (v >= arr[i]){
            v -= arr[i];
            count++;
        }
    }
    
    return count;
}

int main(){
    int x;
    vector<int> arr = {1, 2, 5, 10, 20, 50, 100, 1000};
    cin >> x;

    cout << coinChange(arr, x);
}