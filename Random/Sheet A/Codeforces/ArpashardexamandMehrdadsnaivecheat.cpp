#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int power(int n)
{
    int result = 1;
    int value = 1378;
    while (n > 0)
    {
        if (n % 2 != 0)
            result = (result % 10 * value % 10) % 10;
        value = (value % 10 * value % 10) % 10;
        n /= 2;    
    }
    return result;
}
int main()
{
    int n; cin >> n;
    cout << power(n) << endl;
}
