#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct item {
    int l = 0,
    r = 0, b = 0, f = 0;
};

void doWork() {
    int x, y;
    string s;
    cin >> x >> y >> s;

    item count;
    for (char &i : s) {
        if (i == 'R')
            count.r++;
        else if (i == 'L')
            count.l++;
        else if (i == 'B')
            count.b++;
        else count.f++;
    }

    x = abs(x);
    y = abs(y);

    if (count.l == count.r && count.f == count.b && x <= count.l && y <= count.f)
        puts("YES");
    else puts("NO");
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
