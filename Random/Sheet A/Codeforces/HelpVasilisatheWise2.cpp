#include <iostream>
using namespace std;

int row1, row2, col1, col2, diagonal1, diagonal2;

bool check(int x00, int x01, int x10, int x11)
{
    return (x00 + x01 == row1 && x10 + x11 == row2 && x00 + x10 == col1 && x01 + x11 == col2 && x00 + x11 == diagonal1 && x01 + x10 == diagonal2);
}
int main()
{
    cin >> row1 >> row2 >> col1 >> col2 >> diagonal1 >> diagonal2;

    for (int x00 = 1; x00 < 10; x00++)
    {
        for (int x01 = 1; x01 < 10; x01++)
        {
            if (x00 == x01) continue;
            for (int x10 = 1; x10 < 10; x10++)
            {
                if (x00 == x10 || x10 == x01) continue;
                for (int x11 = 1; x11 < 10; x11++)
                {
                    if (x11 == x10 || x11 == x01 || x11 == x00) continue;
                    if (check(x00, x01, x10, x11))
                    {
                        cout << x00 << " " << x01 << endl << x10 << " " << x11 << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
}