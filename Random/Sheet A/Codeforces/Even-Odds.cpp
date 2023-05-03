#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll number, position;
    cin >> number >> position;

    ll mid = number / 2;
    if (number % 2 != 0)
        mid++;

    if (position > mid)
        cout << 2 * (position - mid) << endl;
    else 
        cout << (2 * position) - 1 << endl;        
}
