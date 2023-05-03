#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases, mountains;
    cin >> cases >> mountains;

    vector <int> peaks(2 * cases + 1);
    for (int i = 0; i < (2 * cases + 1); i++)
    {
        cin >> peaks[i];
    }

    for (int i = 0; i < peaks.size(); i++)
    {
        if (i % 2 != 0 && mountains && (peaks[i] > peaks[i - 1] + 1) && (peaks[i] > peaks[i + 1] + 1))
        {
            mountains--;
            cout << peaks[i] - 1 << " ";
        }
        else cout << peaks[i] << " ";
    }

}