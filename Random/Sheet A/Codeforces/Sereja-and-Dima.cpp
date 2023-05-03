#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int cases; cin >> cases;
    vector <int> game(cases);
    for (int i = 0; i < cases; i++)
        cin >> game[i];

    int leftmost = 0, rightmost = cases - 1;
    int index = 0, point = 0, sereja = 0, dima = 0;
    while (leftmost <= rightmost)
    {
        if (game[leftmost] > game[rightmost])
        {
            point = game[leftmost];
            leftmost++;
        }
        else 
        {
            point = game[rightmost];
            rightmost--;
        }
        if (index % 2 == 0)
            sereja += point;
        else 
            dima += point;
        index++;    
    }
    cout << sereja << " " << dima << endl;
}