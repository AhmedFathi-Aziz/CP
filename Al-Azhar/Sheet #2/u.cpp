#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int n) {
    int sum = 0;
    while (n > 0)
        sum += n % 10, n /= 10;
    return sum;
}

void doWork() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int out = 0;
    for (int i = 1; i <= n; i++) {
        if (a <= sum(i) && sum(i) <= b)
            out += i;
    }
    cout << out << endl;
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
