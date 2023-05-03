#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    double x, y;
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "Q1\n";
    else if (x < 0 && y > 0)
        cout << "Q2\n";
    else if (x < 0 && y < 0)
        cout << "Q3\n";
    else if (x > 0 && y < 0) 
        cout << "Q4\n";
    else if (x == 0 && y == 0)
        cout << "Origem\n";
    else if (!y && x)
        cout << "Eixo X\n";
    else cout << "Eixo Y\n";
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
