#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;
    
    int sumX = 0, sumY = 0, sumZ = 0;
    while (cases--)
    {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        sumX += xi, sumY += yi, sumZ += zi;
    }

    if (!sumX && !sumY && !sumZ)
        cout << "YES" << endl;
    else cout << "NO" << endl;    
}