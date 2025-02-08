#include<bits/stdc++.h>
using namespace std;

bool bfs(int src, vector<int> adj[], vector<bool>& vis){
    vis[src] = 1;
    queue<pair<int,int>> q;
    q.push({src,-1});
    while (!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto it: adj[node]){
            if (!vis[it]){
                vis[it] = true;
                q.push({it, node});
            }
            else if (parent != it) return true;
        }
    }
    return false;
}

bool isCycle(vector<int> adj[], int n) {
    vector<bool> vis(n,false);
    for (int i = 0; i < n; i++){
        if (!vis[i]){
            if (bfs(i, adj, vis)) return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    cout << isCycle(adj, n);


}