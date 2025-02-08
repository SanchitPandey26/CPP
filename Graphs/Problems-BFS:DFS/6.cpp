#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> vis(n, vector<int>(m,0));
    vector<vector<int>> dis(n, vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (mat[i][j] == 0){
                q.push({{i,j}, 0});
                vis[i][j] = 1;
            }
        }
    }
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    while (!q.empty()){
        int r = q.front().first.first;
        int c = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        dis[r][c] = steps;

        for (int i = 0; i < 4; i++){
            int nr = r + drow[i];
            int nc = c + dcol[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc] == 0){
                vis[nr][nc] = 1;
                q.push({{nr,nc}, steps + 1});
            }
        }
    }
    return dis;
}

int main(){
    vector<vector<int>> adj
    {
        {0, 0, 0},
        {0, 1, 0},
        {1, 1, 1}
    };

    adj = updateMatrix(adj);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
}