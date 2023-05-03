#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a, b;
    cin >> a >> b;
    cout << a.length() << ' ' << b.length() << endl;
    cout << a + b << endl;

    swap(a[0], b[0]);
    cout << a << ' ' << b << endl;
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
