#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int covered = 0;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;

        covered += (end - start) + 1;
    }

    if (covered % k != 0)
    {
        covered %= k;
        cout << k - covered << endl;
    }
    else cout << 0 << endl;    
}