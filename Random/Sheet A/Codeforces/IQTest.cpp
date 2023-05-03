#include <iostream>
using namespace std;

char painted[4][4];
bool check(int i, int j)
{
    if (i + 1 > 3 || j + 1 > 3)
        return false;

    return (painted[i][j] == painted[i][j + 1] && painted[i][j] == painted[i + 1][j] && painted[i][j] == painted[i + 1][j + 1]);    
}

bool check()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            if (check(i, j))
                return true;

    }
    return false;
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> painted[i][j];
    }

    bool exist = check();
    if (exist)
        cout << "YES" << endl;

    else
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                char original = painted[i][j];

                if (painted[i][j] == '#')
                    painted[i][j] = '.';
                else painted[i][j] = '#';

                if (check())
                    exist = true;

                if (exist)
                {
                    cout << "YES" << endl;
                    return 0;
                }    
                
                painted[i][j] = original;
            }
        }
        cout << "NO" << endl;
    }         
}
