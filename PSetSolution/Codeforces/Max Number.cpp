#include <bits/stdc++.h>
using namespace std;

int maxi(int *a, int n) {
    if (n == 0)
        return a[n];
    return max(a[n], maxi(a, n - 1));
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;
    --n;
    cout << maxi(a, n);
    return 0;
}
