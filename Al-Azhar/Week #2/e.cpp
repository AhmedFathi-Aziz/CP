#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int r1, r2,
    c1, c2, d1, d2;
    cin >> r1 >> r2 >>
    c1 >> c2 >> d1 >> d2;

    for (int i00 = 1; i00 < 10; i00++) {
        for (int i01 = 1; i01 < 10; i01++) {
            if (i01 == i00)
                continue;
            for (int i10 = 1; i10 < 10; i10++) {
                if (i10 == i01 || i10 == i00)
                    continue;
                for (int i11 = 1; i11 < 10; i11++) {
                    if (i11 == i10 || i11 == i00 || i11 == i01)
                        continue;
                    if (r1 == i00 + i01 && r2 == i10 + i11 && c1 == i00 + i10 && c2 == i01 + i11 &&
                    d1 == i00 + i11 && d2 == i01 + i10) {
                        cout << i00 << ' ' << i01 << endl,
                        cout << i10 << ' ' << i11 << endl;
                        return void();
                    }    
                }
            }
        }
    }
    cout << -1 << endl;
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
