#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases; cin >> cases;
    vector <int> homeColor(cases);
    vector <int> guestColor(cases);

    for (int i = 0; i < cases; i++)
        cin >> homeColor[i] >> guestColor[i];

    int answer = 0;
    for (int i = 0; i < cases; i++)
    {
        for (int j = 0; j < cases; j++)
        {
            if (i != j && homeColor[i] == guestColor[j])
                answer++;
        }
    }
    cout << answer << endl;
}