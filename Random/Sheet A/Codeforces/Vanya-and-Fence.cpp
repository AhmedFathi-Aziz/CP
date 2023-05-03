#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases, height;
    cin >> cases >> height;

    vector <int> friends(cases);
    int answer = 0;
    for (int i = 0; i < cases; i ++)
    {
        cin >> friends[i];
        if (friends[i] > height)
            answer += 2;
        else
            answer += 1;    
    }

    cout << answer << endl;
}