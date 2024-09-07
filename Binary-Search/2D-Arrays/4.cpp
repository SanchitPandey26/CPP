#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int low = 0, high = m-1, did = 0;
    while (low <= high){
        int mid = (low+high)/2;
        int maxi = -1, index = -1;
        for (int i = 0; i < n; i++){
            if (arr[i][mid] > maxi){
                maxi = arr[i][mid];
                index = i;
            }
        }
        int left = mid - 1 >= 0 ? arr[index][mid-1] : -1;
        int right = mid + 1 < m ? arr[index][mid+1] : -1;
        if (arr[index][mid] > left && arr[index][mid] > right){
            did = 1;
            cout << index << ' ' << mid << endl;
        }
        else if (arr[index][mid] < left) high = mid -1;
        else low = mid + 1;
    }
    if (did==0){
        cout << "-1 -1" << endl;
    }
}