#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long

int main()
{
    ll n; cin >> n;

    if (n % 2 == 0)
        cout << n / 2 << endl;
    else cout << -1 * ((n / 2) + 1) << endl;    
}
