#include <bits/stdc++.h>
using namespace std;

void doWork() {
    string a, b;
    cin >> a >> b;

    int out = 0, j = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[j])
            j++;
        else if (j && a[i] == b[j - 1])
            out++;
        else return cout << -1 << '\n', void();
    }
    j == b.length() ? cout << out << '\n' : cout << -1 << '\n';
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