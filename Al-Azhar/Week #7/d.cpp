#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, k;
    cin >> n >> k;
    int a[n];
    int mod[k] {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mod[a[i] % k]++;
    }

    int out = 0;
    for (int i = 0; i < n; i++) {
        int se = a[i] % k;
        if (se + se == k || se == 0) {
            if (mod[se] >= 2) {
                out += 2;
                mod[se] -= 2;
            }
        }
        else {
            if (mod[se] > 0 && mod[k - se] > 0) {
                out += 2;
                mod[se]--, mod[k - se]--;
            }
        }
    }
    cout << out << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
