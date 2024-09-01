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

    int low = 0, high = n-1, did = 0;
    while (low <= high){
        int mid = (high+low)/2;
        if (k == arr[mid]){
            did = 1;
            cout << mid << endl;
            break;
        }
        else if(k < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if (did == 0) cout << -1 << endl;
    
}