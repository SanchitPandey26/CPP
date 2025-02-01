#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& arr) {
    int maxi = 0, n = arr.size();
    for (int i = 0; i < n; i++){
        if (maxi < i) return false;
        maxi = max(maxi, i + arr[i]);
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if(canJump(arr)) cout << "TRUE";
    else cout << "FALSE";
}