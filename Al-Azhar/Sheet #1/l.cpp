#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string s1, f1,
    s2, f2;
    cin >> s1 >> f1 >> s2 >> f2;
    if (f1 == f2)
        cout << "ARE Brothers\n";
    else cout << "NOT\n";
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