#include <iostream>
using namespace std;

int main()
{
    string scale, remaining;
    cin >> scale >> remaining;

    string left = "", right = "";
    int symbol = scale.find('|');

    left = scale.substr(0, symbol);
    right = scale.substr(symbol + 1);

    for (int i = 0; i < remaining.length(); i++)
    {
        if (left.length() < right.length())
            left += remaining[i];
        else right += remaining[i];    
    }

    if (left.length() == right.length()) cout << left << "|" << right << endl;
    else cout << "Impossible" << endl;
}