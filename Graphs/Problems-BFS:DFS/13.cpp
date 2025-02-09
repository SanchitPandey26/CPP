#include<bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid, int n, int m){
    vis[row][col] = 1;
    queue<pair<int,int>> q;
    q.push({row,col});

    while (!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int dr = -1; dr <= 1; dr++){
            for (int dc = -1; dc <= 1; dc++){
                int nr = r + dr;
                int nc = c + dc;
                if (abs(dr-dc)==1 && nr >= 0 && nr < n && nc >= 0 && nc < m
                    && grid[nr][nc] == '1' && !vis[nr][nc]){
                        vis[nr][nc] = 1;
                        q.push({nr,nc});
                    }
            }
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m,0));
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!vis[i][j] && grid[i][j] == '1'){
                cnt++;
                bfs(i, j, vis, grid, n , m);
            }
        }
    }
    return cnt;
}

int main(){
    vector<vector<char>> adj
    {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'0', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}
    };

    cout << numIslands(adj);
}