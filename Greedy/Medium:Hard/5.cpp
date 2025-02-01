#include<bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int ded;
    int profit;
};

bool comp(Job val1, Job val2){
    return val1.profit > val2.profit;
}

int help (Job arr[], int n){
    sort(arr, arr + n, comp);
    int totalprofit = 0, cnt = 0, maxi = -1;
    for (int i = 0; i < n; i++) maxi = max(maxi, arr[i].ded);
    vector<int> hash(maxi+1, -1);
    for (int i = 0; i < n; i++){
        for (int j = arr[i].ded; j > 0; j--){
            if (hash[j] == -1){
                cnt++;
                hash[j] = arr[i].id;
                totalprofit += arr[i].profit;
                break;
            }
        }
    }
    return totalprofit;
}

int jobSequence(vector<int> id, vector<int> ded, vector<int> profit){
    int n = id.size();
    Job arr[n];
    for (int i = 0; i < n; i++){
        arr[i].id = id[i];
        arr[i].ded = ded[i];
        arr[i].profit = profit[i];
    }
    return help(arr, n);
}

int main(){
    int n;
    cin >> n;
    vector<int> id(n);
    vector<int> ded(n);
    vector<int> profit(n);
    for (int i = 0; i < n; i++) cin >> id[i];
    for (int i = 0; i < n; i++) cin >> ded[i];
    for (int i = 0; i < n; i++) cin >> profit[i];

    cout << jobSequence(id, ded, profit);
}