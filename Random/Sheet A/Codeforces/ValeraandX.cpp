#include <iostream>
#include <vector>
using namespace std;
#define ll long long

char check[301][301];
int main()
{
    int n; cin >> n;

    bool answer = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> check[i][j];

            if (i == j)
            {
                if (check[i][j] != check[0][0])
                    answer = false;
            }
            else if (i + j == n - 1)
            {
                if (check[i][j] != check[0][n - 1])
                    answer = false;
                if (check[i][j] != check[0][0])
                    answer = false;    
            }
            else
            {
                if ((check[i][j] != check[0][1]))
                {
                    answer = false;
                }
                if (check[i][j] == check[0][0])
                    answer = false;
            }

        }
    }
    if (answer)
        cout << "YES" << endl;
    else cout << "NO" << endl;    
}
