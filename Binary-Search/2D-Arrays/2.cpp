#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m, k;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cin >> k;
    bool ans = false;
    for (int i = 0; i < n; i++){
        if (arr[i][0] <= k && arr[i][m-1] >= k){
            int low = 0, high = m-1;
            while (low <= high){
                int mid = (low+high)/2;
                if (arr[i][mid] == k) {
                    ans = true;
                    break;
                }
                if (arr[i][mid] > k) high = mid - 1;
                else low = mid + 1;
            }
        }
    }
    if (ans) cout << "True" << endl;
    else cout << "False" << endl;
}