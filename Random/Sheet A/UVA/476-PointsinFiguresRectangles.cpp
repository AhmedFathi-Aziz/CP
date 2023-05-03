#include <iostream>
using namespace std;

int main()
{
    double coordinates[11][5];
    char type;

    int index = 0;

    while (cin >> type)
    {
        if (type == '*')
            break;

        cin >> coordinates[index][0] >> coordinates[index][1] >> coordinates[index][2] >> coordinates[index][3];
        index++;
    }

    double x, y;
    int count = 1;
    while (true)
    {
        cin >> x >> y;
        if (x == 9999.9 && y == 9999.9)
            break;

        bool contained = false;
        int i = 0;
        for (; i < index; i++)
        {
            if ((x > coordinates[i][0] && y < coordinates[i][1]) && (x < coordinates[i][2] && y > coordinates[i][3]))
            {
                cout << "Point " << count << " is contained in figure " << i + 1 << endl;
                contained = true;
            }
        }

        if (!contained)
            cout << "Point " << count << " is not contained in any figure" << endl;
        count++;
    }
}