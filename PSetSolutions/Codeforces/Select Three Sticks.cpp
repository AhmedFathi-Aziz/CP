#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    
    int out = INT_MAX;
    for (int i = 0; i < n - 2; i++) {
        out = min(out, (a[i + 2] - a[i + 1]) + (a[i + 2] - a[i]));
        out = min(out, (a[i + 1] - a[i]) + a[i + 2] - a[i + 1]);
        out = min(out, (a[i + 2] - a[i]) + (a[i + 1] - a[i]));
    }
    cout << out << '\n';

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