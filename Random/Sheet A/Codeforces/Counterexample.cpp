#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    ll n1, n2;
    cin >> n1 >> n2;

    if (n1 % 2 != 0) n1++;
    if (abs(n2 - n1) < 2)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << n1 << " " << n1 + 1 << " " << n1 + 2 << endl;
}
