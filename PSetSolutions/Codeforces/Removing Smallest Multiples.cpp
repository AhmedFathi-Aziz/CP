#include <bits/stdc++.h>
using namespace std;

void doWork() {
   int n;
   cin >> n;

   string a;
   cin >> a;
   
   a = '#' + a;
   long long out = 0;
   int acc[n + 9];
   memset(acc, 0, sizeof (acc));

   for (int i = 1; i <= n; i++) {
        if (a[i] == '0') {
            for (int j = i; j <= n; j += i) {
                if (a[j] == '0') {
                    if (!acc[j])
                        acc[j] = i;
                }
                else break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        out += acc[i];
    cout << out << '\n';
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