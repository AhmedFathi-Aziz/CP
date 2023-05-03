#include <iostream>
using namespace std;
#define N 2003

int parent[N];
int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int manager; cin >> manager;
        parent[i] = manager;
    }

    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        int depth = 0;
        int currentNode = i;
        while (parent[currentNode] != -1)
        {
            depth++;
            currentNode = parent[currentNode];
        }
        answer = max(answer, depth);
    }
    cout << ++ answer << endl;
}