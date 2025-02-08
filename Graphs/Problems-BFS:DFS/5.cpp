#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, vector<int> adj[], vector<bool> &vis){
    vis[node] = true;
    for (auto it : adj[node]){
        if (!vis[it]){
            if (dfs(it, node, adj, vis)) return true;
        }
        else if(parent != it) return true;
    }
    return false;
}

bool isCycle(vector<int> adj[], int n) {
    vector<bool> vis(n,false);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (dfs(i, -1, adj, vis)) return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    cout << isCycle(adj, n);
}