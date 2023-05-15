#include <bits/stdc++.h>
using namespace std;

void print(string n, int i = 0) {
    if (i == n.size())
        return;
    cout << n[i] << ' ';
    print(n, i + 1);
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string n;
        cin >> n;
        print(n);
        cout << '\n';
    }
    return 0;
}
