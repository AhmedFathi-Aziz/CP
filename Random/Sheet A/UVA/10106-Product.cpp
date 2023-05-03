#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s1, s2;

    vector <int> answer(550);
    while (cin >> s1)
    {
        cin >> s2;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        fill(answer.begin(), answer.end(), 0);
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < s2.length(); j++)
            {
                answer[i + j] += (s1[i] - '0') * (s2[j] - '0');
            }
        }

        for (int i = 0; i < answer.size(); i++)
        {
            answer[i + 1] += answer[i] / 10;
            answer[i] %= 10;
        }

        int i = answer.size() - 1;
        while (i > 0 && answer[i] == 0) i--;
        for (; i >=0; i--)
            cout << answer[i];
        cout << endl;    
    }
}