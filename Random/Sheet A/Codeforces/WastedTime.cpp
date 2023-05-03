#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int cases, papers;
    cin >> cases >> papers;

    double speed = 50;
    double time = 0;
    double distance = 0;
    
    double x0, y0;
    cin >> x0 >> y0;

    cases--;
    while (cases--)
    {
        double x1, y1;
        cin >> x1 >> y1;

        distance = sqrt((pow((x1 - x0), 2) + (pow((y1 - y0), 2))));

        time += distance / speed;
        x0 = x1;
        y0 = y1;
    }
    cout << fixed << setprecision(9) << time * papers << endl;
}

