#include<bits/stdc++.h>
using namespace std;

struct Data{
    int start;
    int end;
    int pos;
};

bool comp(Data val1, Data val2){
    return val1.end < val2.end;
}

int maxMeetings(vector<int> start, vector<int> end){
    int n = start.size();
    Data arr[n];
    for (int i = 0; i < n; i++){
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].pos = i + 1;
    }
    sort(arr, arr + n, comp);

    int cnt = 0, freeTime = -1;
    vector<int> ans;
    for (int i = 0; i < n; i++){
        if (arr[i].start > freeTime){
            cnt++;
            freeTime = arr[i].end;
            ans.push_back(arr[i].pos);
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    for (int i = 0; i < n; i++) cin >> start[i];
    for (int i = 0; i < n; i++) cin >> end[i];

    cout << maxMeetings(start, end);
}