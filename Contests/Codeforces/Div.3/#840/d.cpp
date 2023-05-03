#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        b[i] -= a[i];
    }
    
    sort(b, b + n);
    int i = 0, j = n - 1, out = 0;
    while (i < j) {
        if (b[i] + b[j] >= 0)
            out++, i++, j--;
        else i++;
    }
    cout << out << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
