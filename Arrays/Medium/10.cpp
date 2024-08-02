#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int longest = 1;
    unordered_set<int> set;
    for (int i = 0; i < n; i++){
        set.insert(arr[i]);
    }
    for (auto it: set){
        if (set.find(it -1) == set.end()){
            int cnt = 1;
            int x = it;
            while (set.find(x+1) != set.end()){
                cnt++;
                x++;
            }
            longest = max(longest,cnt);
        }
    }
    cout << longest;
}
