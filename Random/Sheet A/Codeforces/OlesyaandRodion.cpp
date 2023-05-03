#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
#define ll long long

int main()
{
    int number, divisible; cin >> number >> divisible;

    if (divisible >= 1 && divisible <= 9)
    {
        while (number--)
            cout << divisible;
    }
    else if (divisible == 10 && number > 1)
    {
        number--;
        cout << 1;
        while (number--)
            cout << 0;
    }
    else cout << -1 << endl;
}
