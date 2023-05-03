#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            return cout << "no\n", void();
    }
    cout << "yes\n";
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