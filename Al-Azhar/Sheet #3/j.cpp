#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];
    int mini = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mini = min(mini, a[i]);
    }
    int occ = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mini)
            occ++;
    }
    (occ & 1) ? cout << "Lucky" << endl : cout << "Unlucky" << endl;
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
