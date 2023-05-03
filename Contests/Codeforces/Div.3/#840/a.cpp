#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < (abs(c - b) + c))
        cout << 1;
    else if (a > (abs(c - b) + c))
        cout << 2;
    else cout << 3;
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
