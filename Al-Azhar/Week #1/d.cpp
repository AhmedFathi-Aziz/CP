#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, d, out = 0;
    cin >> n >> d;

    int soldiers[n];
    for (int i = 0; i < n; i++)
        cin >> soldiers[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if (abs(soldiers[i] - soldiers[j]) <= d)
                out++;
    }
    cout << out * 2 << '\n';
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
