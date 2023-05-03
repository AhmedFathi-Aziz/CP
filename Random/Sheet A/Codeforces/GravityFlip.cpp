#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> gravity(n);
    for (int i = 0; i < n ; i++)
        cin >> gravity[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (gravity[j] > gravity[j + 1])
            {
                int m = gravity[j];
                gravity[j] = gravity[j + 1];
                gravity[j + 1] = m;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << gravity[i] << " ";    
}