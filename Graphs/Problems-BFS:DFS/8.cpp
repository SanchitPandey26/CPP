#include<bits/stdc++.h>
using namespace std;

int numEnclaves(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m,0));
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == 0 || j == 0 || i == n-1 || j == m-1){
                if (grid[i][j] == 1){
                    vis[i][j] = 1;
                    q.push({i,j});
                }
            }
        }
    }

    int drow[] = {-1,0,1,0};
    int dcol[] = {0,1,0,-1};
    while (!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            int nr = r + drow[i];
            int nc = c + dcol[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc] != 1 && grid[nr][nc] == 1){
                vis[nr][nc] = 1;
                q.push({nr,nc});
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (grid[i][j] == 1 && vis[i][j] == 0) cnt++;
        }
    }

    return cnt;
}

int main(){
    vector<vector<int>> adj
    {
        {0, 0, 0, 0},
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    };

    cout << numEnclaves(adj);
}