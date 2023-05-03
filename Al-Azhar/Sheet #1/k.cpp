#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxi = a, mini = a;
    if (maxi < b)
        maxi = b;
    if (maxi < c)
        maxi = c;

    if (mini > b)
        mini = b;
    if (mini > c)
        mini = c;
    cout << mini << ' ' << maxi;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}