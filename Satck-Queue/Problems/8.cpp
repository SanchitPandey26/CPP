#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    int area = 0;
    for (int i = 0; i < n; i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            int element = st.top(); st.pop();
            int nse = i;
            int pse = st.empty() ? -1 : st.top();
            area = max(area, (arr[element] * (nse - pse - 1)));
        }
        st.push(i);
    }
    while(!st.empty()){
            int element = st.top(); st.pop();
            int nse = n;
            int pse = st.empty() ? -1 : st.top();
            area = max(area, (arr[element] * (nse - pse - 1)));
    }
    return area;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << largestRectangleArea(arr);
}