#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned int n;

    while (cin >> n && n != 0)
    {
        int in = sqrt(n);
        in * in == n ? cout << "yes" << endl : cout << "no" << endl;
    }
}