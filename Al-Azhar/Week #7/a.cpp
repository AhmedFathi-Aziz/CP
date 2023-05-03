#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e5 + 9;

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int freq[N] {0}, out = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            out = max(out, ++freq[a[i] + a[j]]);
    }
    cout << out << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
