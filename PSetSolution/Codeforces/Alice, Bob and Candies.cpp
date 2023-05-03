#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    int sw[n];
    for (int &i : sw)
        cin >> i;
    
    bool turn = true;
    int l = 0, r = n - 1, out = 0;
    int alice = 0, bob = 0;
    int a = 0, b = 0;
    while (l <= r) {
        if (turn) {
            while (l <= r && a <= b)
                a += sw[l++];
            alice += a;
            b = 0;
        }
        else {
            while (l <= r && b <= a)
                b += sw[r--];
            bob += b;
            a = 0;
        }
        turn = !turn;
        out++;
    }
    cout << out << ' ' << alice << ' ' << bob << '\n';
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