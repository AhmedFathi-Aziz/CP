#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string word;
    getline(cin, word);

    set <char> letters;

    for (int i = 0; i < word.length(); i++)
        if (isalpha(word[i]))
            letters.insert(word[i]);
            
    cout << letters.size() << endl;        
}