#include <iostream>
using namespace std;

int main()
{
    int cases; cin >> cases;

    string word;

    while (cases--)
    {
        cin >> word;
        if (word.length() > 10)
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        else 
            cout << word << endl;        
    }
}