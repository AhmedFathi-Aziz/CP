#include <iostream>
using namespace std;

int main()
{
    int first, second, third, fourth;
    cin >> first >> second >> third >> fourth;

    string game; 
    cin >> game;

    int calories = 0;
    for (int i = 0; i < game.length(); i++)
    {
        if (game[i] == '1')
            calories += first;
        else if (game[i] == '2')
            calories += second;
        else if (game[i] == '3')
            calories += third;
        else
            calories += fourth;            
    }
    cout << calories << endl;
}