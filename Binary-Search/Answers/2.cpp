#include<bits/stdc++.h>
using namespace std;

int power(int mid, int n, int m){
    long long ans = 1;
    for (int i = 1; i <= n; i++){
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    int low = 1, high = m;
    while (low <= high){
        int mid = (low + high)/2;
        int ans = power(mid, n, m);
        if (ans == 1){
            cout << mid << endl;
            return 1;
        }
        else if (ans == 0) low = mid + 1;
        else high = mid - 1;
    }
    cout << -1 << endl;
}