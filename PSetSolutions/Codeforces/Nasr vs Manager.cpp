#include <bits/stdc++.h>
using namespace std;

void doWork() {
    string a;
    getline(cin, a);
    for (char &i : a) {
        if (isupper(i))
            i += 32;
        else if (islower(i)) i -= 32;
    }
    cout << a << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    cin >> cases;
    cin.ignore();
    while (cases--)
        doWork();
    return 0;
}