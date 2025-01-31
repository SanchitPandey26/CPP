#include<bits/stdc++.h>
using namespace std;

int assign(vector<int> g, vector<int> s){
    int n = g.size(), m = s.size(), l = 0, r = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    while (l < n && r < m){
        if (g[l] <= s[r]) l++;
        r++;
    }
    return l;
}

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> arr1(a);
    vector<int> arr2(b);
    for (int i = 0; i < a; i++) cin >> arr1[i];
    for (int i = 0; i < b; i++) cin >> arr2[i];

    cout << assign(arr1,arr2);
}