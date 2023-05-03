#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

int main()
{
    string number;
    cin >> number;

    int last = -1, count1s = 0;
    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] == '1')
        {
            if (last == -1)
                last = i;
            else count1s++;    
        }
    }
    
    if (last == -1)
    {
        cout << 0 << endl;
        return 0;
    }

    last = number.length() - last - 1;

    if (last % 2 != 0)
    {
        last++;
        count1s = 0;
    }
    
    last /= 2;

    if (count1s > 0)
        last++;
    cout << last << endl;    
}