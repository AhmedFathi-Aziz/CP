#include <bits/stdc++.h>
using namespace std;

void doWork() {
   int n;
   cin >> n;
   n -= 3;
   n /= 3;
   cout << --n << '\n';
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