#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;

    int pos = a.find("EGYPT");
    while (pos != string::npos) {
        a.replace(pos, 5, 1, ' ');
        pos = a.find("EGYPT", pos + 1);
    }
    cout << a << endl;
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
