#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cases; cin >> cases;
    vector <int> crimes(cases);

    int police = 0;
    int answer = 0;
    for (int i = 0; i < cases; i++)
    {
        cin >> crimes[i];
        if (crimes[i] > 0)
            police += crimes[i];
        else 
        {
            if (police > 0)
                police--;
            else 
                answer++;    
        }    
    }
    cout << answer << endl;
}