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

long long sumSubarrayMins(vector<int>& arr) {
    vector<int> nse = findNSE(arr);
    vector<int> psee = findPSEE(arr);
    long long ans = 0;
    for (int i = 0; i < arr.size(); i++){
        int left = i - psee[i];
        int right = nse[i] - i;
        ans = (ans + (left * right * (long long) 1 * arr[i]));
    }
    return ans;
}

vector<int> findNGE(vector<int>& arr){
    stack<int> s;
    vector<int> nge(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--){
        while (!s.empty() && arr[s.top()] <= arr[i]) s.pop();
        nge[i] = s.empty() ? arr.size() : s.top();
        s.push(i);
    }
    return nge;
}

vector<int> findPGEE(vector<int>& arr){
    stack<int> s;
    vector<int> pgee(arr.size());
    for (int i = 0; i < arr.size(); i++){
        while (!s.empty() && arr[s.top()] < arr[i]) s.pop();
        pgee[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    return pgee;
}

long long sumSubarrayMaxs(vector<int>& arr) {
    vector<int> nge = findNGE(arr);
    vector<int> pgee = findPGEE(arr);
    long long ans = 0;
    for (int i = 0; i < arr.size(); i++){
        int left = i - pgee[i];
        int right = nge[i] - i;
        ans = (ans + (left * right * (long long) 1 * arr[i]));
    }
    return ans;
}

long long subArrayRanges(vector<int>& arr) {
    return sumSubarrayMaxs(arr) - sumSubarrayMins(arr);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << subArrayRanges(arr);
}