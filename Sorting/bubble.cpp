#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = n-1; i > 0; i--){
        int didswap = 0;
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap++;
            }
        }
        if (didswap==0) break;
    }
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}

// Time complexity of bubble sort is O(n^2) in worst and average case but 
// in best case it is O(n).