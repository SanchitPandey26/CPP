#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> map;
    for (int i = 0; i < n; i++){
        map[arr[i]]++;
    }
    for (auto x: map){
        cout << x.first << ' ' << x.second << endl;
    }
}