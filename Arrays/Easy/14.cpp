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
    int maxLen = 0, sum = 0;
    map<int,int> mpp;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        if (sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if (mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        if (mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    cout << maxLen;


}