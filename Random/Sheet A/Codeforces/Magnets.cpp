#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int magnets = 0;
    cin >> magnets;
    int copy = magnets;
    cases--;
    int answer = 1;

    bool start = true;
    while (cases--)
    {
        cin >> magnets;

        if (magnets != copy)
        {
            if (magnets != copy && start)
            {
                answer = 0;
                answer += 2;
                start = false;
            }
            else if (magnets != copy)
                answer++; 
        }

       copy = magnets;     
    }
    cout << answer << endl;
}