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
    unordered_map<int,int> map;
    for (int i = 0; i < n; i++){
        int rem = k - arr[i];
        if (map.find(rem) != map.end()){
            cout << map.at(rem) << ' ' << i;
            break;
        }
        map[arr[i]] = i;
    }
}