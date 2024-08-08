#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i< n; i++){
            cin >> arr[i];
    }
    cin >> k;

    unordered_map<int, int>  map;
    map[0] = 1;
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        int rem = sum - k;
        if (map.find(rem) != map.end()){
            count += map[rem];
        }
        map[sum] += 1;
    }

    cout << count;
    
}