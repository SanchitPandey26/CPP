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

    int low = 0, high = n -1, first = -1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == k){
            first = mid;
            high = mid -1;
        }
        else if (arr[mid] > k){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    if (first == -1) cout << 0;
    else{
        low = 0, high = n -1;
        int last = -1;
        while (low <= high){
            int mid = (low+high)/2;
            if (arr[mid] == k){
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] > k){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << last - first + 1;
    }
    
}