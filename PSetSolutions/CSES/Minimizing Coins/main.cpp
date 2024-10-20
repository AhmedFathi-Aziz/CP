#include <bits/stdc++.h>
using namespace std;

int n;
int memo[1000001];
int coins[101];

int solve(int amount) {
    if (amount == 0)
        return 0;
    int &ret = memo[amount];
    if (~ret)
        return ret;
    ret = 1e9;
    for (int i = 0; i < n; i++)
        if (amount >= coins[i])
            ret = min(ret, 1 + solve(amount - coins[i]));
    return ret;
}

int main() {
    int x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    memset(memo, -1, sizeof(memo));
    int out = solve(x);
    if (out == 1e9)
        cout << -1;
    else
        cout << out;
    cout << endl;
    return 0;
}