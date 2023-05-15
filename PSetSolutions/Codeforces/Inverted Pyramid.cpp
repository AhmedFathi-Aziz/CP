#include <bits/stdc++.h>
using namespace std;

void print(int n, int spaces, int i = 1) {
    if (i > n)
        return void();
    print(n, spaces - 1, i + 1);
    for (int i = 0; i < spaces; i++)
        cout << ' ';
    for (int j = 0; j < 2 * i - 1; j++)
        cout << '*';
    cout << '\n';
}

int main() {
    int n;
    cin >> n;
    print(n, n - 1);
    return 0;
}
