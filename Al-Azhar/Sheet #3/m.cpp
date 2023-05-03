#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];

    int mini = 1e9, maxi = -1e9;
    int mi = 0, ma = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < mini)
            mini = a[i], mi = i;
        if (a[i] > maxi)
            maxi = a[i], ma = i;
    }
    swap(a[ma], a[mi]);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
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
