#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& adj) {
    int n = adj.size();
    int m = adj[0].size();

    // {{r,c},t}
    queue<pair<pair<int,int>,int>> q;
    int vis[n][m];
    int cntFresh = 0;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (adj[i][j] == 2){
                q.push({{i,j}, 0});
                vis[i][j] = 2;
            }
            else vis[i][j] = 0;
            if (adj[i][j] == 1) cntFresh++;
        }
    }

    int time = 0;
    int drow[] = {-1,0,1,0};
    int dcol[] = {0,1,0,-1};
    int cnt = 0;
    while (!q.empty()){
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        time = max(time, t);
        q.pop();
        for (int i = 0; i < 4; i++){
            int nrow = r + drow[i];
            int ncol = c + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                && vis[nrow][ncol] == 0 && adj[nrow][ncol] == 1){
                vis[nrow][ncol] = 2;
                q.push({{nrow,ncol}, t+1});
                cnt++;
            }
        }
    }

    if (cnt != cntFresh) return -1;
    return time;
}

int main(){
    vector<vector<int>> adj
    {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };

    cout << orangesRotting(adj);
}