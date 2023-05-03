#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string stones; cin >> stones;

    int answer = 0;
    for (int i = 0; i < stones.length(); i++)
    {
        if (stones[i] == stones[i + 1])
            answer++;
    }
    cout << answer << endl;
}