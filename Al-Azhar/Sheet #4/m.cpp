#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;

    string b = "hello";
    int in = 0;
    for (char &i : a) {
        if (i == b[in]) {
            in++;
            if (in == b.length())
                return puts("YES"), void();
        }
    }
    puts("NO");
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
