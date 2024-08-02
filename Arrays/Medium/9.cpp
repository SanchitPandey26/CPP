#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    int ele = arr[n-1];
    for (int i = n-1; i >= 0; i--){
        if (arr[i] >= ele){
            ele = arr[i];
            ans.emplace_back(ele);
        }
    }
    for (int i = ans.size()-1;i >= 0; i--){
        cout << ans[i]<< ' ';
    }
}
