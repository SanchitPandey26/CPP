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
    int row = 0, col = m-1;
    bool ans = false;
    while (row < n && col >= 0){
        if (arr[row][col] == k){
            ans = true;
            break;
        }
        else if (arr[row][col] > k) col--;
        else row++;
    }
    if (ans) cout << "True\n";
    else cout << "False\n";
}