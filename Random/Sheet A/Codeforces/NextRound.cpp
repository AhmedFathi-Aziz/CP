#include <iostream> 
#include <vector>
using namespace std;

int main()
{
    int n, rank;
    cin >> n >> rank;

    rank--;
    vector <int> scores(n);
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    int advancers = 0;
    for (int i = 0; i < n ; i++)
    {
        if (scores[i] >= scores[rank] && scores[i] > 0) advancers++;
    }
    cout << advancers << endl;
}

