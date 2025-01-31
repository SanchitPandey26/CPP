#include<bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& arr) {
    int count_5 = 0, count_10 = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == 5) count_5++;
        else if(arr[i] == 10){
            count_10++;
            count_5--;
        }
        else{
            if (count_10 > 0){
                count_10--;
                count_5--;
            }
            else count_5 -= 3;
        }
        if (count_5 < 0 || count_10 < 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << lemonadeChange(arr);
}