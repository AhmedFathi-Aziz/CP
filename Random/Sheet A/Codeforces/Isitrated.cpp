#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

struct compare 
{
    bool operator()(pair <int, int> p1, pair <int, int> p2)
    {
        return p1.first > p2.first;
    }
};

int main()
{
    int cases; cin >> cases;

    vector<pair <int, int> > rate;
    while (cases--)
    {
        int before, after; cin >> before >> after;

        rate.push_back(make_pair(before, after));
    }

    for (int i = 0; i < rate.size(); i++)
    {
        if (rate[i].first != rate[i].second)
        {
            cout << "rated" << endl;
            return 0;
        }
    }
    vector<pair <int, int>> copy;
    copy = rate;
    sort (copy.begin(), copy.end(), compare());

    if (rate == copy)
        cout << "maybe" << endl;
    else 
        cout << "unrated" << endl;    
}
