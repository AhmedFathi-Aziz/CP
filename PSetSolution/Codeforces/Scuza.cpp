#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, q;
   cin >> n >> q;
   int a[n];
   ll prefix[n];
   
   int maxi = 0;
   for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (maxi < a[i])
            maxi = a[i];
        if (i)
            prefix[i] = prefix[i - 1] + a[i];
        else prefix[i] = a[i];
        a[i] = maxi;
   }

   while (q--) {
        int u;
        cin >> u;

        int index = upper_bound(a, a + n, u) - a;
        if (index)
            cout << prefix[index - 1] << ' ';
        else cout << 0 << ' ';
   }
   cout << endl;
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