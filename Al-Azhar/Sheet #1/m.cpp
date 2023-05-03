#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    char c;
    cin >> c;
    if (isdigit(c))
        cout << "IS DIGIT\n";
    else if (isupper(c))
        cout << "ALPHA\n" << "IS CAPITAL";
    else
        cout << "ALPHA\n" << "IS SMALL";
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
