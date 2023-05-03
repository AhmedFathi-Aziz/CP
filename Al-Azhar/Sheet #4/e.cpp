#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;

    int out = 0;
    for (char &i : a)
        out += (i - '0');
    cout << out << endl;
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
