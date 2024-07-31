#include<bits/stdc++.h>
using namespace std;

/*In this question we need to print the subarray which has the maximum sum
from the last question.*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0, maxi = arr[0], ansStart = -1, ansEnd = -1, start = -1;
    for (int i = 0; i < n; i++){
        if (sum == 0) start = i;
        sum += arr[i];
        if (sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0) sum = 0;
    }
    for (int i = ansStart; i <= ansEnd; i++){
        cout << arr[i] << ' ';
    }
    
}