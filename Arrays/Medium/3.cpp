#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int el, cnt = 0;
    for (int i = 0; i < n; i++){
        if (cnt == 0){
            el = arr[i];
            cnt++;
        }
        else if (arr[i] == el) cnt++;
        else cnt--;
    }
    if (cnt == 0) cout << -1;
    else cout << el;
}