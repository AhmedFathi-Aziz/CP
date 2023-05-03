#include <iostream>
#define ll long long
using namespace std; 

int main()
{
    int cases;
    ll icecream;
    cin >> cases >> icecream;

    char status;
    int packs, kids = 0;
    while (cases--)
    {
        cin >> status >> packs;
        if (status == '+')
            icecream += packs;
        else 
        {
            if (packs > icecream)
                kids++;
            else
                icecream -= packs;    
        }    
    }
    cout << icecream << " " << kids << endl;
}