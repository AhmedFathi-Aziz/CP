#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool valid(int a, int b, int x) {
    return abs(a - b) >= x;
}

void doWork() {
    int l, r, x;
    int a, b;
    cin >> l >> r >> x;
    cin >> a >> b;

    int out = -1;
    if (a == b) 
        out = 0;
    else if (valid(a, b, x))
        out = 1;
    else if (valid(a, r, x) && valid(r, b, x))
        out = 2;
    else if (valid(a, l, x) && valid(l, b, x))
        out = 2;
    else if (valid(a, l, x) && valid(l, r, x) && valid(r, b, x))
        out = 3;
    else if (valid(a, r, x) && valid(r, l, x) && valid(l, b, x))
        out = 3;
    cout << out << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
