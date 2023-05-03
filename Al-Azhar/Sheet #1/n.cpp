#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    char c;
    cin >> c;
    if (isupper(c))
        cout << char (c + 32);
    else cout << char (c - 32);
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
