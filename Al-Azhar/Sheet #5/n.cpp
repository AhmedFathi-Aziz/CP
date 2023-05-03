#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shift(int*, int n);

void doWork() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    shift(a, n);
    delete []a;
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
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!a[i]) count++;
        else cout << a[i] << ' ';
    }
    while (count--) cout << 0 << ' ';
}
