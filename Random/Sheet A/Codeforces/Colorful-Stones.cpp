#include <iostream>
using namespace std;

int main()
{
    string stones, instruction;
    cin >> stones >> instruction;

    char less = stones[0];

    int in = 0;
    for (int i = 0; i < instruction.length(); i++)
    {
        if (instruction[i] == less)
        {
            less = stones[in + 1];
            in++;
        }
    }
    cout << ++in << endl;
}