#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int n; cin >> n;

    vector <bool> visit(n, false);

    int casesX; cin >> casesX;
    for (int i = 0; i < casesX; i++)
    {
        int level; cin >> level;
        level--;
        visit[level] = true;
    }

    int casesY; cin >> casesY;
    for (int i = 0; i < casesY; i++)
    {
        int level; cin >> level;
        level--;
        visit[level] = true;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
}
