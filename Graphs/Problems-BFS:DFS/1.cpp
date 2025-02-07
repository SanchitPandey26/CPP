#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int>& vis){
    vis[node] = 1;

    for (int i = 0; i < adj.size(); i++){
        if (!vis[i] && adj[node][i] == 1){
            dfs(i, adj, vis);
        }
    }
}

int findCircleNum(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> vis(n,0);
    int count = 0;

    for (int i = 0; i < n; i++){
        if (!vis[i]){
            count++;

            dfs(i, adj, vis);
        }
    }
    return count;
}

int main(){
    vector<vector<int>> adj
    {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}
    };

    cout << findCircleNum(adj);
}