#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> map;
    for (int i = 0; i < n; i++){
        map[arr[i]]++;
    }

    int maxfreq =  0, minfreq = n, maxele = 0, minele = 0;
    for (auto it: map){
        int count = it.second;
        int element = it.first;

        if (count > maxfreq){
            maxfreq = count;
            maxele = element;
        }
        if (count < minfreq){
            minfreq = count;
            minele = element;
        }
    }
    cout << maxele << endl;
    cout << minele;
}