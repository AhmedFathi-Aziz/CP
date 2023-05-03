#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string word; cin >> word;

    int anton = 0, danik = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'A')
            anton++;
        else 
            danik++;
    }

    if (anton > danik)
        cout << "Anton" << endl;
    else if (anton < danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;           
}