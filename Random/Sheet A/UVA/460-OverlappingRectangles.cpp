#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int coordinates[2][4];
    int cases; cin >> cases;
    
    bool start = true;
    while (cases--)
    {
        memset(coordinates, 0, sizeof(coordinates));

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 4; j++)
                cin >> coordinates[i][j];
        }

        int lowerX = max(coordinates[0][0], coordinates[1][0]);
        int lowerY = max(coordinates[0][1], coordinates[1][1]);

        int upperX = min(coordinates[0][2], coordinates[1][2]);
        int upperY = min(coordinates[0][3], coordinates[1][3]);

        if (!start) cout << endl;
        start = false;

        if (lowerX < upperX && upperY > lowerY)
            cout << lowerX << " " << lowerY << " " << upperX << " " << upperY << endl;
        else 
            cout << "No Overlap" << endl;    
    }
}