#include<bits/stdc++.h>
using namespace std;

int main(){
    int r , c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    // int col[c] = {0};    --> arr[0][..]
    // int row[r] = {0};    --> arr[..][0]
    int col0 = 1;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] == 0){
                // martk the ith row
                arr[i][0] = 0;
                if (j != 0){
                    // mark the jth column
                    arr[0][j] = 0;
                }
                else col0 = 0;
            }
        }
    }
    for (int i = 1; i < r; i++){
        for (int j = 1; j < c; j++){
            if (arr[i][j] != 0){
                if (arr[i][0] == 0 || arr[0][j] == 0){
                    arr[i][j] = 0;
                }
            }
        }
    }
    if (arr[0][0] == 0){
        for (int j = 0; j < c; j++){
            arr[0][j] = 0;
        }
    }
    if (col0 == 0){
        for (int i = 0; i < r; i++){
            arr[i][0] = 0;
        }
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    
}
