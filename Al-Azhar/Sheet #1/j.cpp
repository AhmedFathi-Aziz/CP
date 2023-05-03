#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "Multiples\n";
    else cout << "No Multiples\n";
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
