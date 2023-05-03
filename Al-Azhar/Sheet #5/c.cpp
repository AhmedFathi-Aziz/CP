#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrome(int n) {
    string a;
    while (n > 0) {
        a.push_back((n % 2) + '0');
        n /= 2;
    }
    int len = a.length();
    for (int i = 0; i < len / 2; i++)
        if (a[i] != a[len - i - 1])
            return false;
    return true;
}

bool odd(int n) {
    return (n & 1);
}

void doWork() {
    int n;
    cin >> n;
    if (odd(n) && palindrome(n))
        puts("YES");
    else puts("NO");
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
