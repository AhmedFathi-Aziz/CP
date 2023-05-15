#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n, c;
    cin >> n >> c;

    int a[101];
    memset(a, 0, sizeof (a));

    while (n--) {
        int p;
        cin >> p;
        a[p]++;
    }
    int out = 0;
    for (int i = 1; i <= 100; i++) 
        a[i] >= c ? out += c : out += a[i];
    cout << out << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}