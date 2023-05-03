#include <iostream>
using namespace std;

void converToLower(string &word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
            word[i] += 32;    
    }
}
void convertToUpper(string &word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if(islower(word[i]))
            word[i] -= 32;
    }
}
int main()
{
    string word; cin >> word;

    int upper = 0, lower = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
            upper++;
        else 
            lower++;    
    }
    if (upper > lower)
        convertToUpper(word);    
    else 
        converToLower(word);
    cout << word << endl;    
}