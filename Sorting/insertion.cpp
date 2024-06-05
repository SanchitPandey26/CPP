#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++){
        int j = i;
        while ( j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}

// Time complexity of inertion sort is O(n^2) in worst and average case but 
// in best case it is O(n).