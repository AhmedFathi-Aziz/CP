#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int a, b;
    cin >> a >> b;
    cout << a + b << '\n' << a - b << '\n';
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
