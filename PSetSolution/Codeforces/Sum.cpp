#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b + c || b == a + c || c == a + b)
        cout << "yes\n";
    else cout << "no\n";
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