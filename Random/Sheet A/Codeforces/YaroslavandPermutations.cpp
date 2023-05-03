#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> number(n);

    for (int i = 0; i < n; i++)
        cin >> number[i];

    bool valid = true;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (number[i] == number[j])
                c++;
        }
        if (n < 2 * c - 1)
        {
            valid = false;
            break;
        }
    }
    if (valid)
        cout << "YES" << endl;
    else cout << "NO" << endl;    
}
