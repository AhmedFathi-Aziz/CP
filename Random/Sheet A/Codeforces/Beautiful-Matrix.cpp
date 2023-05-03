#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int beautiful[5][5];
    int answer = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> beautiful[i][j];
            if (beautiful[i][j] == 1)
            {
                answer = abs(2 - i) + abs(2 - j);
            }
        }
    }
    cout << answer << endl;
}