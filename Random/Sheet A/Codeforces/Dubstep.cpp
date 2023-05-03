#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    string song; cin >> song;
    bool first = true;
    for (int i = 0; i < song.length(); i++)
    {
        if (song[i] == 'W' && song[i + 1] == 'U' && song [i + 2] == 'B')
        {
            i = i + 2;
            if (!first)
                cout << " ";
            continue;
        }
        cout << song[i];
        first = false;   
    }
}
