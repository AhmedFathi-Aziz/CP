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

int forward(vector <int> &section, int before, int after, int n, int valid = 1) {
    while (after < n && section[after] <= section[before]) {
        after++;
        before++;
        valid++;
    }
    return valid;
}
int backward(vector <int> &section, int before, int after, int n, int valid = 1) {
    while (before >= 0 && section[before] <= section[after]) {
        after--;
        before--;
        valid++;
    }
    return valid;
}

int main()
{
	ACM
    int n; cin >> n;
    vector <int> section(n);
    for (int i = 0; i < n; i++)
        cin >> section[i];

    int answer = 0;
    answer = max(answer, forward(section, 0, 1, n));
    answer = max(answer, backward(section, n - 2, n - 1, n));
    for (int i = 1; i < n; i++) {
        int forth = forward(section, i, i + 1, n);
        int back = backward(section, i - 1, i, n);
        answer = max(answer, (forth + back - 1));
    }
    cout << answer << endl;
}
