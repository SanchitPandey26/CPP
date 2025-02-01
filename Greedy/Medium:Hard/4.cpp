#include<bits/stdc++.h>
using namespace std;

int minPlatforms(vector<int> arr, vector<int> dep){
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int l = 0, r = 0, cnt = 0, maxi = 0;
    while (l < arr.size()){
        if (arr[l] <= dep[r]){
            cnt++;
            l++;
        }
        else{
            cnt--;
            r++;
        }
        maxi = max(maxi, cnt);
    }
    return maxi;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> dep(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> dep[i];

    cout << minPlatforms(arr, dep);
}