#include <bits/stdc++.h>
using namespace std;
#define ll long long

double mean(double a[], int n);

void doWork() {
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << fixed << setprecision(6);
    cout << mean(a, n) << endl;
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

double mean(double a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return 1.0 * sum / n;
}
