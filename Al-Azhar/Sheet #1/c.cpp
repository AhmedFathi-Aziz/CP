#include <bits/stdc++.h>
using namespace std;

void doWork() {
    long long a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << a + b << '\n';
    cout << a << " * " << b << " = " << a * b << '\n';
    cout << a << " - " << b << " = " << a - b << '\n';
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
