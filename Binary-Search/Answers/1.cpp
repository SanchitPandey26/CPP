#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int low = 1, high = n;
    while (low <= high){
        int mid = (high + low)/2;
        if (mid*mid <= n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << high << endl;
}