#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, m;
    cin >> n >> m;

    double mini = 1e9;
    while (n--) {
        int a, b;
        cin >> a >> b;
        mini = min(mini, (double) a / b);
    }
    cout << fixed << setprecision(8);
    cout << mini * m << '\n';
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
