#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shift(int*, int n);

void doWork() {
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (t--)
        shift(a, n);
    for (int i = 0 ; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
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

void shift(int *a, int n) {
    int last = a[n - 1];

    for (int i = n - 2; i >= 0; i--)
        a[i + 1] = a[i];
    a[0] = last;
}
