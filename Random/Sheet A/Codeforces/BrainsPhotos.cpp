#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int row, col; cin >> row >> col;

    char color;
    bool isColored = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> color;
            if (color == 'Y' || color == 'C' || color == 'M')
                isColored = true;
        }
    }
    if (isColored)
        cout << "#Color" << endl;
    else cout << "#Black&White" << endl;    
}
