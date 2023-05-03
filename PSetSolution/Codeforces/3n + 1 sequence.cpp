#include <bits/stdc++.h>
using namespace std;
#define ll long long

int len(int n) {
    if (n == 1)
        return 1;
    if (n & 1)  
        return 1 + len(3 * n + 1);
    return 1 + len(n / 2);
}

int main() {
    int n;
    cin >> n;
    cout << len(n);
    return 0;
}
