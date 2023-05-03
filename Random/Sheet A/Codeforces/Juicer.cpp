#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number, juicer, wasteSection;
    cin >> number >> juicer >> wasteSection;
    vector <int> oranges(number);

    int waste = 0;
    int answer = 0;
    for (int i = 0; i < number; i++)
    {
        cin >> oranges[i];

        if (oranges[i] <= juicer)
        {
            waste += oranges[i];
            if (waste > wasteSection)
            {
                waste = 0;
                answer++;
            }
        }
    }
    cout << answer << endl;
}