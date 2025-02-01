#include<bits/stdc++.h>
using namespace std;

int shortestJob(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int t = 0, ans = 0, n = arr.size();
    for (int i = 0; i < n; i++){
        ans += t;
        t += arr[i];
    }
    return ans/n;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << shortestJob(arr);
}