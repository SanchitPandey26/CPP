#include<bits/stdc++.h>
using namespace std;



bool comp(vector<int> val1, vector<int> val2){
    return val1[1] < val2[1];
}

int eraseOverlapIntervals(vector<vector<int>>& arr) {
    sort(arr.begin(), arr.end(), comp);
    int n = arr.size(), cnt = 0;
    int lastEndTime = arr[0][1];
    for (int i = 1; i < n; i++){
        if (arr[i][0] >= lastEndTime){
            cnt++;
            lastEndTime = arr[i][1];
        }
    }
    return n - cnt;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    
    eraseOverlapIntervals(arr);
}