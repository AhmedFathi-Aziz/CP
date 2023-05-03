#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, end = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i], end += a[i];

    int begin = 0, out = 0;
    for (int i = 0; i < n - 1; i++) {
        begin += a[i];
        if (begin == (end - begin))
            out++;
    }
    cout << out << endl;
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
