#include <iostream>
using namespace std;
#define N 505

bool G[N][N];
int main()
{
    int n; cin >> n;
    int a, b; cin >> a >> b;
    a--, b--;
    int m; cin >> m;

    for (int i = 0; i < m; i++)
    {
        int friend1, friend2;
        cin >> friend1 >> friend2;
        friend1--, friend2--;

        G[friend1][friend2] = true;
        G[friend2][friend1] = true;
    }

    int answer = 0; 
    for (int i = 0; i < n; i++)
    {
        if (G[i][a] && G[i][b])
            answer++;
    }
    cout << answer << endl;
}