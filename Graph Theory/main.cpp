#include <iostream>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

vector<int> bfs(int root, vector<vector<int>> &adj) {
    int n = adj.size();
    vector<int> dis(n, -1);
    dis[root] = 0;

    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        int rate = dis[node];
        for (int child : adj[node])
            if (dis[child] == -1)
                q.push(child),
                dis[child] = rate + 1;
    }
    return dis;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(++n);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dis = bfs(1, adj);
    cout << dis[5] << endl;
    return 0;
}