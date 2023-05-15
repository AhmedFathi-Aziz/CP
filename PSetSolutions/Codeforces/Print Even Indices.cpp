#include <bits/stdc++.h>
using namespace std;

void print(int *a, int n);

int main() {
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    --n;
    print(a, n);
    return 0;
}

void print(int *a, int n) {
    if (n == -1)
        return;
    if (n % 2 == 0)
        cout << a[n] << ' ';
    print(a, n - 1);
}
