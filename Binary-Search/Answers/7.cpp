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
    int low = 0, high = n-1;
    while (low <= high){
        int mid = (low+high)/2;
        int mis = arr[mid] - (mid+1);
        if (mis < k) low = mid+1;
        else high = mid-1;
    }
    cout << low + k<< endl;
}