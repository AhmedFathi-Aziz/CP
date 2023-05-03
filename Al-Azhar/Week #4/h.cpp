#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 109;

void doWork() {
    int n, m;
    cin >> n >> m;

    int a[N];
    memset(a, 0, sizeof(a));
    while (n--) {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    vector<int> out;
    for (int i = 1; i <= m; i++) {
        a[i] += a[i - 1];
        if (!a[i])
            out.push_back(i);
    }
    cout << out.size() << endl;
    for (int &i : out)
        cout << i << ' ';
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
