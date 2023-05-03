#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a, b;
    cin >> a >> b;

    while (!a.empty() || !b.empty()) {
        if (!a.empty())
            putchar(a[0]), a.erase(0, 1);
        if (!b.empty())
            putchar(b[0]), b.erase(0, 1);
    }
    putchar('\n');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif
    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
