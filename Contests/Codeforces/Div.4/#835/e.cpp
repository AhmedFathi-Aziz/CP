#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cnt(int a[], int n) {
    ll out = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            out += one;
        one += (a[i] == 1);
    }
    return out;
}

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    
    ll out = cnt(a, n);
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (!a[i]) {
            a[i] = 1;
            index = i;
            break;
        }
    }
    ll p1 = cnt(a, n);
    a[index] = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i]) {
            a[i] = 0;
            index = i;
            break;
        }
    }
    ll p2 = cnt(a, n);
    cout << max({out, p1, p2}) << '\n';
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
