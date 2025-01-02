#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> nums1, vector<int> nums2){
    stack<int> st;
    unordered_map<int,int> map;
    for (int i = nums2.size()-1; i >= 0; i--){
        while (!st.empty() && st.top() <= nums2[i]) st.pop();
        if (st.empty()) map[nums2[i]] = -1;
        else map[nums2[i]] = st.top();
        st.push(nums2[i]);
    }

    vector<int> result;
    for (int i = 0; i < nums1.size(); i++){
        result.push_back(map[nums1[i]]);
    }
    return result;

}

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    vector<int> arr2;
    for (int i = 0; i < x; i++){
        cin >> arr2[i];
    }
    vector<int> ans = nextGreaterElement(arr1, arr2);
}