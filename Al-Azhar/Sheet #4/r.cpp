#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string a;
    cin >> n >> a;
    int out = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == 'V')
            out += 5;
        else if (a[i] == 'W')
            out += 2;
        else if (a[i] == 'X' && i + 1 != a.length()) {
            i++;
            continue;;
        }
        else if (a[i] == 'Y' && i + 1 != a.length()) {
            i++;
            a.push_back(a[i]);
            continue;
        }
        else if (a[i] == 'Z' && i + 1 != a.length()) {
            if (a[i + 1] == 'V') {
                i++;
                out /= 5;
                continue;
            }
            else if (a[i + 1] == 'W') {
                out /= 2;
                i++;
                continue;
            }
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
