#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int mini = arr[0], profit = 0;
    for (int i = 1; i < n; i++){
        int cost = arr[i] - mini;
        profit = max(cost, profit);
        mini = min(arr[i],mini);
    }
    cout << profit;
}