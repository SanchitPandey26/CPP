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

    sort(arr, arr+n);
    vector<int> v;
    int low = 0, high = n-1, ans = -1;
    while (low <= high){
        int mid = (high+low)/2;
        if (arr[mid] <= k){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    v.emplace_back(ans);
    low = 0, high = n-1, ans = -1;
    while (low <= high){
        int mid = (high+low)/2;
        if (arr[mid] >= k){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    v.emplace_back(ans);
    for (int a = 0; a < v.size(); a++){
        cout << v[a] << ' ';
    }
    
}