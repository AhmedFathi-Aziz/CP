#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;
    if (a.length() > 10)
        cout << a[0] << a.length() - 2 << a[a.length() - 1];
    else cout << a;
    cout << endl;
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
