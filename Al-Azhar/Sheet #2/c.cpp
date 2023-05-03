#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    int out[4] {};
    while (n--) {
        int a;
        cin >> a;
        if (a % 2 == 0)
            out[0]++;
        if (a % 2 != 0)
            out[1]++;
        if (a > 0)
            out[2]++;
        if (a < 0)
            out[3]++;    
    }
    cout << "Even: " << out[0] << endl;
    cout << "Odd: " << out[1] << endl;
    cout << "Positive: " << out[2] << endl;
    cout << "Negative: " << out[3] << endl;
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
