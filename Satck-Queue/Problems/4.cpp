#include<bits/stdc++.h>
using namespace std;

vector<int> findNSE(vector<int>& arr){
    stack<int> s;
    vector<int> nse(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--){
        while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();
        nse[i] = s.empty() ? arr.size() : s.top();
        s.push(i);
    }
    return nse;
}

vector<int> findPSEE(vector<int>& arr){
    stack<int> s;
    vector<int> psee(arr.size());
    for (int i = 0; i < arr.size(); i++){
        while (!s.empty() && arr[s.top()] > arr[i]) s.pop();
        psee[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    return psee;
}

int sumSubarrayMins(vector<int>& arr) {
    vector<int> nse = findNSE(arr);
    vector<int> psee = findPSEE(arr);
    int ans = 0;
    int mod = (int) 1e9 + 7;
    for (int i = 0; i < arr.size(); i++){
        int left = i - psee[i];
        int right = nse[i] - i;
        ans = (ans + (left * right * (long long) 1 * arr[i]) % mod) % mod;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << sumSubarrayMins(arr);
}