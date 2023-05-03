#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;
    
    int l = 0, r = 0, out = 0;
    for (char &i : a) {
        if (i == 'L')
            l++;
        else r++;
        if (l == r)
            out++;
    }
    cout << out << endl;
    for (char &i : a) {
        putchar(i);
        if (i == 'L') l++;
        else r++;
        if (l == r)
            putchar('\n');
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
