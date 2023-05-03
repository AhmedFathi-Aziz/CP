#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b;
    while (cin >> a >> b && a > 0 && b > 0) {
        if (a > b)
            swap(a, b);
        int sum = 0;
        for (; a <= b; a++)
            cout << a << ' ', sum += a;
        cout << "sum =" << sum << endl;
    }
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
