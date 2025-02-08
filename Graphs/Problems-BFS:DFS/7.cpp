#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>>& board) {
        
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

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
}