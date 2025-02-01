#include<bits/stdc++.h>
using namespace std;

int canJump(vector<int>& arr) {
    int n = arr.size();
    int jumps = 0, l = 0, r = 0;
    while ( r < n-1){
        int farthest = 0;
        for (int i = l; i <= r; i++){
            farthest = max(farthest, i + arr[i]);
        }
        jumps++;
        l = r+1;
        r = farthest;
    }
    return jumps;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << canJump(arr);
}