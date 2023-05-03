#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;


/*DFS*/
const int n = 11;
vector<vector<int>> neighbors(n);
bool visited[n];

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    ++nodes;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        neighbors[u].push_back(v);
        neighbors[v].push_back(u);
    }

    int components = 0;
    stack<int> stk;
    for (int node = 1; node < n; node++) {
        if (!visited[node]) {
            components++;
            stk.push(node);
            while (!stk.empty()) {
                int top = stk.top();
                stk.pop();
                visited[top] = true;
                for (int child : neighbors[top]) {
                    if (!visited[child])
                        stk.push(child);
                }
            }
        }
    }
    cout << components;
    cout << endl;
    return 0;
}