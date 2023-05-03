#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;

    vector <int> steward(n);
    for (int i = 0; i < n; i++)
        cin >> steward[i];

    sort(steward.begin(), steward.end());

    int answer = 0;
    if (n > 2)
    {
        for (int i = 1; i < n - 1 ; i++)
        {
            if (steward[i] - steward[0] > 0 && steward[i] - steward[n - 1] < 0)
                answer++;    
        }
        cout << answer << endl;
    }
    else cout << 0 << endl;
}