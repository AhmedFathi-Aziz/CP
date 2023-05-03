#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    getline(cin, a);

    bool pass = false;
    int out = 0;
    char rep;
    for (char &i : a) {
        if (isalpha(i)) {
            if (!isalpha(rep))
                out++;
        }
        rep = i;
    }
    cout << out << endl;
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
