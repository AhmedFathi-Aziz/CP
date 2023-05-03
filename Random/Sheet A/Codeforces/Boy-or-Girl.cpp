#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string name; cin >> name;
    sort(name.begin(), name.end());

    int answer = 0;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != name[i + 1])
            answer++;
    }
    if (answer % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;    
}