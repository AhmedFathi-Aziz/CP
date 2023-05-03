#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    double a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a / b) << '\n';
    cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << '\n';
    cout << "round " << a << " / " << b << " = " << round(a / b) << '\n';
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
