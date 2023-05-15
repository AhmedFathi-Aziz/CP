#include <bits/stdc++.h>
using namespace std;

string bin;
void base(int n) {
    if (!n)
        return;
    bin += n % 2 + '0';
    base(n / 2);
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        bin = "";
        int n;
        cin >> n;
        base(n);
        reverse(bin.begin(), bin.end());
        cout << bin;
        cout << '\n';
    }
    return 0;
}
