#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> students(n);

    vector <int> programming;
    vector <int> maths;
    vector <int> sports;
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];

        if (students[i] == 1)
            programming.push_back(i + 1);
        else if (students[i] == 2)
            maths.push_back(i + 1);
        else
            sports.push_back(i + 1);        
    }
    int number = min(programming.size(), min(maths.size(), sports.size()));
    cout << number << endl;

    for (int i = 0; i < number; i++)
    {
        cout << programming[i] << " " << maths[i] << " " << sports[i] << endl;
    }
}