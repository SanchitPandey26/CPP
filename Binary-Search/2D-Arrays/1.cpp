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
    int cnt_max = 0, index = -1;
    for (int i = 0; i < n; i++){
        int low = 0, high = m-1, ans = m;
        while (low <= high){
            int mid = (low+high)/2;
            if (arr[i][mid] >= 1){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        if (m - ans > cnt_max){
            cnt_max = m - ans;
            index = i;
        }
    }
    cout << index;
}