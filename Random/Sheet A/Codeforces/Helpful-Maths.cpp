#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;

    for (int i = 0; i < word.length() - 1; i+=2)
    {
        for (int j = 0; j < word.length() - i - 1; j+=2)
        {
            if (word[j] > word[j + 2])
                swap(word[j], word[j + 2]);
        }
    }
    cout << word << endl;
}