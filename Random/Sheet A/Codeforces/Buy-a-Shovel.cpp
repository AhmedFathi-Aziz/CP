#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int price, coin;
    cin >> price >> coin;

    int shovels = 1;
    while (true)
    {
        if (shovels * price % 10 == 0 || shovels * price % 10 == coin)
            break;
        shovels++;
    }
    cout << shovels << endl;
}