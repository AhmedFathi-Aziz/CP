#include <bits/stdc++.h>
using namespace std;

long long sum(int *a, int n) {
    if (!n)
        return a[n];
    return a[n] + sum(a, n - 1);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    --n;
    cout << sum(a, n);
    return 0;
}
