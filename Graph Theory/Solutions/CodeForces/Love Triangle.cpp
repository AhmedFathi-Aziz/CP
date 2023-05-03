#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define N 5005

bool G[N][N];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int planes; cin >> planes;
        planes--;
        G[i][planes] = true;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!G[i][j]) continue;
            for (int k = 0; k < n; k++)
            {
                if (!G[j][k]) continue;
                if (G[k][i])
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}