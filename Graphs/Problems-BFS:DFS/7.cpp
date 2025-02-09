#include<bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<char>>& board, vector<vector<int>>& vis,
         int drow[], int dcol[], int n, int m){
            vis[row][col] = 1;

            for (int i = 0; i < 4; i++){
                int nr = row + drow[i];
                int nc = col + dcol[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc]
                    && board[nr][nc] == 'O'){
                        dfs(nr, nc, board, vis, drow, dcol, n, m);
                    }
            }
}

void solve(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();

    vector<vector<int>> vis(n, vector<int>(m,0));
    int drow[] = {-1,0,1,0};
    int dcol[] = {0,1,0,-1};

    for (int i = 0; i < m; i++){
        if (!vis[0][i] && board[0][i] == 'O') 
            dfs(0, i, board, vis, drow, dcol, n, m);
        if (!vis[n-1][i] && board[n-1][i] == 'O') 
            dfs(n-1, i, board, vis, drow, dcol, n, m);
    }

    for (int i = 0; i < n; i++){
        if (!vis[i][0] && board[i][0] == 'O') 
            dfs(i, 0, board, vis, drow, dcol, n, m);
        if (!vis[i][m-1] && board[i][m-1] == 'O') 
            dfs(i, m-1, board, vis, drow, dcol, n, m);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!vis[i][j] && board[i][j] == 'O') board[i][j] = 'X';
        }
    }
    return;
}

int main(){
    vector<vector<char>> adj
    {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };

    solve(adj);

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
}