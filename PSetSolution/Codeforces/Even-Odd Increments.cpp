#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, q;
   cin >> n >> q;
   int a[n];

   ll sum = 0;
   int odd = 0, even = 0;
   for (int &i : a) {
        cin >> i;
        sum += i;
        odd += i % 2;
   }
   even = n - odd;
   
   while (q--) {
        int type, v;
        cin >> type >> v;
        if (type == 0) {
            sum += v * even;
            if (v & 1)
                odd += even, even = 0;
        }
        else {
            sum += v * odd;
            if (v & 1)
                even += odd, odd = 0;
        }
        cout << sum << '\n';
   }
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