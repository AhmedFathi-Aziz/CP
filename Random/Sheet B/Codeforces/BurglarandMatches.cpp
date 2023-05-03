#include <iostream>
#include <algorithm>
#include <assert.h>
#include <string>
#include <vector>
#include <math.h>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

bool compare(const pair <int, int> &a, const pair <int, int> &b) 
{
    return a.second > b.second;
}

int main()
{
	ACM
    int n, m;
    cin >> n >> m;

    vector <pair <int, int>> container;
    for (int i = 0; i < m; i++) {
        int matchbox, match;
        cin >> matchbox >> match;

        container.push_back({matchbox, match});
    }

    sort(container.begin(), container.end(), compare);
    int answer = 0;

    for (int i = 0; i < m && n != 0; i++) {

        while (container[i].first && n != 0) {
            answer += container[i].second;
            container[i].first -= 1;

            n -= 1;
        }
    }
    cout << answer << endl;
}
