#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;

    double side = 0;
    double angle;
    while (cases--)
    {
        cin >> angle;

        side = 360 / (180 - angle);
        if (side == int(side))
            cout << "YES" << endl;
        else cout << "NO" << endl;    
    }
}