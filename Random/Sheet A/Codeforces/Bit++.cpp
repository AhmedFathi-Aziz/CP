#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;

    int answer = 0;
    while (cases--)
    {
        string operation; cin >> operation;
        if (operation[0] == '+' || operation[1] == '+')
            answer++;
        else answer--;    
    }
    cout << answer << endl;
}