#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int answer = 0;
    int move = 0;
    char pointer = 'a';
    for (int i = 0 ; i < name.length(); i++)
    {
        answer = abs(name[i] - pointer);
        if (answer > 13) // so we need to counterclockwise
        {
            move += 26 - answer; // counterclockwise
        }
        else 
            move += answer; // clockwise
        pointer = name[i];
    }
    cout << move << endl;
}