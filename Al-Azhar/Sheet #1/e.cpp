#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    double r;
    cin >> r;
    cout << fixed << setprecision(9);
    cout << r * r * 3.141592653;
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
