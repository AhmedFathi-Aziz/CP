#include <iostream>
#include <string>
using namespace std;

void convert(string &word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;
    }
}

int main()
{
    string word1, word2; cin >> word1 >> word2;
    convert(word1);
    convert(word2);

    int n = 0;
    for (int i = 0; i < word1.length() && n == 0; i++)
    {
        if (word1[i] != word2[i])
        {
            if (word1[i] > word2[i])
                n = 1;
            else 
                n = -1;   
        }
    }
    cout << n << endl;
}