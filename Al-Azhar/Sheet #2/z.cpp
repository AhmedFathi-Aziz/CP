#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int k, s;
    cin >> k >> s;
    
    int out = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - (x + y);
            if (0 <= z && z <= k)
                out++;
        }
    }
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
