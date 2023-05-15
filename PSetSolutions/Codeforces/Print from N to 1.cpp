#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int n) {
    if (!n)
        return void();
    cout << n;
    if (n != 1)
        cout << ' ';
    print(n - 1);
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
