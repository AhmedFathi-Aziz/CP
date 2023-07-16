#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int out = 1e9;
int a[21];
ll sum;

void rec(int index, ll g1) {
    if (index == n) {
        ll g2 = sum - g1;
        if (abs(g1 - g2) < out)
            out = abs(g1 - g2);
        return;
    }
    rec(index + 1, g1 + a[index]);
    rec(index + 1, g1);
}

void doWork() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i],
        sum += a[i];
    rec(0, 0);
    cout << out << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   // cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
