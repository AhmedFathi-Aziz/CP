#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, s;
    cin >> n >> s;
    bool visit[51] {};

    int mac = 0;
    for (int i = 0; i < n; i++) {
        int u;
        cin >> u;
        mac = max(mac, u);
        visit[u] = true;
    }

    for (int i = 1; i < mac; i++)
        if (!visit[i])
            s -= i;
    for (int i = mac + 1; i < 100; i++) {
        if (!s)
            return cout << "yes\n", void();
        s -= i;
    }
    cout << "no\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
