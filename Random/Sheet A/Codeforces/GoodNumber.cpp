#include <iostream>
#include <string>
#include <assert.h>
using namespace std;

int main()
{
    int cases, k; cin >> cases >> k;

    string digits = "0123456789";
    int in = -1;
    int answer = 0;
    string number;

    while (cases--)
    {
        int count = 0;
        cin >> number;
        
        if (number.length() <= k) continue;
        for (int i = 0; i <= k; i++)
        {
            in = number.find(digits[i]);
            if (in != -1)
                count++;
        }
        if (count >= k + 1)
            answer++;
    }
    cout << answer << endl;
}
