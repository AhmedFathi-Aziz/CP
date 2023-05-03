#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    int m = n;
    int reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    cout << reverse << endl;
    cout << (m == reverse ? "YES\n" : "NO\n");
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
