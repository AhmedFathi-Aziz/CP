#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    
    string a[3][n];
    map<string, int> mp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j], mp[a[i][j]]++;
    }
    for (int i = 0; i < 3; i++) {
        int out = 0;
        for (int j = 0; j < n; j++) {
            if (mp[a[i][j]] == 1)
                out += 3;
            if (mp[a[i][j]] == 2)
                ++out;    
        }
        cout << out << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
