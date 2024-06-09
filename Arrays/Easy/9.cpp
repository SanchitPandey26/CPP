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
    bool flag = false;
    for (int i = 0; i < n; i++){
        if (arr[i] == k){
            flag = true;
            break;
        }
    }
    if(flag) cout << "True";
    else cout << "False";
}