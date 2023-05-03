#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    char c;
    cin >> n >> c;
    while (n--)
        cout << c << ' ';
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
