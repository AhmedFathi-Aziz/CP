#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    string a;
    cin >> n >> a;

    int len = 0;
    int freq[150] = { };
    for (char &i : a) {
        if (!freq[i]) {
            len++;
            freq[i] = true;
        }
    }

    memset(freq, 0, sizeof(freq));

    int l = 0, r = 0;
    int no = 0;
    int out = 1e9;
    while (r < n) {
        while (r < n) {
            freq[a[r]]++;
            if (freq[a[r]] == 1)
                no++;
            r++;
            if (no == len)
                break;
        }
        out = min(out, r - l);
        while (freq[a[l]] > 1) {
            freq[a[l]]--;
            l++;
        }
        out = min(out, r - l);
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