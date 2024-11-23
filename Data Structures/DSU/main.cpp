#include <iostream>
#include <climits>
#include <cassert>
#include <assert.h>

#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


class DSU {
private:
    vector<int> parent;
    vector<int> size;
public:
    DSU(int n) : parent(n), size(n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int root(int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = root(parent[node]);
    }

    bool Union(int u, int v) {
        int rootU = root(u);
        int rootV = root(v);

        if (rootU == rootV)
            return false;
        
        if (size[rootU] < size[rootV]) {
            parent[rootU] = rootV;
            size[rootV] += size[rootU];
        } else {
            parent[rootV] = rootU;
            size[rootU] += size[rootV];
        }
        return true;
    }

    bool sameComponent(int u, int v) {
        return root(u) == root(v);
    }

};

int main()
{
    int n = 5;
    DSU dsu(n);

    return 0;
}