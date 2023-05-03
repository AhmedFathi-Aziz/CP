#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    char print;
    int n;
    cin >> print >> n;
    while (n--) {
        int a;
        cin >> a;
        while (a--)
            cout << print;
        cout << endl;
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
