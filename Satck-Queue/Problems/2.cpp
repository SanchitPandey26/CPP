#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> nums){
    int n = nums.size();
    stack<int> st;
    vector<int> result(n);
    for (int i = 2 * n - 1; i >= 0; i--){
        while (!st.empty() && st.top() <= nums[i%n]) st.pop();
        if (i < n) result[i] = st.empty() ? -1 : st.top();
        st.push(nums[i%n]);  
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> ans = nextGreaterElement(arr);

    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}