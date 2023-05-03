#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> cities(n);

    for (int i = 0; i < n; i++)
        cin >> cities[i];
    for (int i = 0; i < n ; i++)
    {
        if (i == 0)
            cout << abs(cities[i] - cities[i + 1]) << " ";
        if (i == n - 1)
            cout << abs(cities[i] - cities[i - 1]) << " ";    
        if (i != 0 && i != n - 1)
            cout << min(abs(cities[i] - cities[i + 1]), abs(cities[i] - cities[i - 1])) << " ";
        cout << max(abs(cities[i] - cities[0]), abs(cities[i] - cities[n - 1])) << endl;        
    }    
}