#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    while (n > 0)
    cout << n % 10 << '\n', n/= 10;
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
