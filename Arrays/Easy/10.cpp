#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cin >> k;
    int arr2[k];
    for (int i = 0; i < k; i++){
        cin >> arr2[i];
    }
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < n && j < k){
        if (arr1[i] <= arr2[j]){
            if (v.size() == 0 || v.back() != arr1[i]){
                v.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if (v.size() == 0 || v.back() != arr2[j]){
                v.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n){
        if (v.size() == 0 || v.back() != arr1[i]){
                v.push_back(arr1[i]);
            }
            i++;
    }
    while (j < k){
        if (v.size() == 0 || v.back() != arr2[j]){
            v.push_back(arr2[j]);
        }
        j++;
    }
    for (auto x: v){
        cout << x << ' ';
    }
}