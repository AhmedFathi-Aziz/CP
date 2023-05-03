#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a, b;
    cin >> a >> b;
    
    int n = a.length();
    int m = b.length();
    
    int len = n;
    if (len > m)
        len = m;
    
    for (int i = 0; i < len; i++) {
        if (a[i] != b[i]) {
            if (a[i] < b[i])
                cout << a << endl;
            else
                cout << b << endl;
            return void();
        }
    }
    if (n < m)
        cout << a << endl;
    else cout << b << endl;
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
