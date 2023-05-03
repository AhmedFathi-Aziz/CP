#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number;
    cin >> number;
    vector <int> birds(number);
    for (int i = 0; i < number; i++)
        cin >> birds[i];

    int cases;
    cin >> cases;

    int x, y;
   while (cases--)
   {
        cin >> x >> y;
        --x;

        if (x != 0)
            birds[x - 1] += y - 1;
        if (x != number - 1)
            birds[x + 1] += birds[x] - y;

        birds[x] = 0;    
   }
    
    for (int i = 0; i < number; i++)
        cout << birds[i] << endl;
}