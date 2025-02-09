#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> adj[], vector<bool> &vis, vector<bool> &pathVis){
    vis[node] = true;
    pathVis[node] = true;
    for (auto it : adj[node]){
        if (!vis[it]){
            if (dfs(it, adj, vis, pathVis)) return true;
        }
        else if(pathVis[it]) return true;
    }
    pathVis[node] = false;
    return false;
}

bool isCycle(vector<int> adj[], int n) {
    vector<bool> vis(n,false);
    vector<bool> pathVis(n,false);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (dfs(i, adj, vis, pathVis)) return true;
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
    }
    
    if(isCycle(adj, n)) cout << "True";
    else cout << "False";
}