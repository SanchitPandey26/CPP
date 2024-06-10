#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans;
    int sum1 = n*(n+1)/2, sum2 = 0;
    for (int i = 0; i < n; i++){
        sum2 += arr[i];
    }
    ans = sum1 - sum2;
    cout << ans;
}