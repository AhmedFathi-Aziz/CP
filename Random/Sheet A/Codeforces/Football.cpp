#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long

int main()
{
    int cases; cin >> cases;
    string team; 
     
    map <string, int> mp;

    while (cases--)
    {
        cin >> team;
        mp[team]++;
    }
    
    int score = 0;
    map <string, int> ::iterator i = mp.begin();
    for (; i != mp.end(); i++)
    {
        score = max(score, i -> second);
    }
    map <string, int> ::iterator it = mp.begin();
    for (; it != mp.end(); it++)
    {
        if (it -> second == score)
            cout << it -> first << endl;
    }
}
