#include<bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>>& ans, 
         vector<vector<int>>& image, int color, int drow[], 
         int dcol[], int iniColor){
    ans[row][col] = color;
    int n = image.size();
    int m = image[0].size();
    for (int i = 0; i < 4; i++){
        int nr = row + drow[i];
        int nc = col + dcol[i];
        if (nr >= 0 && nr < n && nc >= 0 && nc < m 
            && ans[nr][nc] != color && image[nr][nc] == iniColor){
                dfs(nr, nc, ans, image, color, drow, dcol, iniColor);
            }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, 
                              int sr, int sc, int color) {
    int iniColor = image[sr][sc];
    vector<vector<int>> ans = image;
    int drow[] = {-1,0,1,0};
    int dcol[] = {0,1,0,-1};
    dfs(sr, sc, ans, image, color, drow, dcol, iniColor);
    return ans;
}

int main(){
    vector<vector<int>> adj
    {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    adj = floodFill(adj, 1, 1, 2);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
}