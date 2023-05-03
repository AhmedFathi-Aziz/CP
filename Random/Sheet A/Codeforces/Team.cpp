#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;

    int petya = 0, vasya = 0, tonya = 0;
    int problems = 0;
    while (cases--)
    {
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2)
            problems++;
    }

    cout << problems << endl;
}