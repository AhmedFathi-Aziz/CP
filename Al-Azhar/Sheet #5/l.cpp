#include <bits/stdc++.h>
using namespace std;
#define ll long long

void conc(int*, int*, int*, int);

void doWork() {
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n * 2];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    conc(a, b, c, n);
    for (int i = 0; i < 2 * n; i++)
        cout << c[i] << ' ';
    cout << endl;

    delete []a;
    delete []b;
    delete []c;
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

void conc(int *a, int *b, int *c, int n) {
    for (int i = 0; i < n; i++)
        c[i] = b[i];
    for (int i = n; i < 2 * n; i++)
        c[i] = a[i - n];
}
