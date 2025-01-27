#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> height){
    int lmax = 0, rmax = 0, l = 0, r = height.size() - 1, ans = 0;
    while (l < r){
        if (height[l] < height[r]){
            if (height[l] >= lmax) lmax = height[l];
            else ans += lmax - height[l];
            l++;
        } 
        else {
            if (height[r] >= rmax) rmax = height[r];
            else ans += rmax - height[r];
            r--;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << trap(arr);
}