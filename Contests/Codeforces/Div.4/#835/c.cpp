#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n, greater<int>());
    
    int maxi = b[0];
    int mx = b[1];
    for (auto &i : a) {
        if (i != maxi)
            cout << i - maxi << ' ';
        else cout << i - mx << ' ';
    }
    cout << '\n';
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
