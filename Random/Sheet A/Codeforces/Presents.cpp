#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n; cin >> n;
    map <int, int> mp;

    int gift;
    for (int i = 1; i <= n; i++)
    {
        cin >> gift;
        mp[gift] = i;
    }
    
    map <int, int> :: iterator i = mp.begin();
    for (; i != mp.end(); i++)
        cout << i -> second << " ";
}