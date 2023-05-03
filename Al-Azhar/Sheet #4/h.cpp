#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;
    int pos = a.find("010");
    if (pos == string::npos) {
        pos = a.find("101");
        if (pos == string::npos) {
            cout << "Bad" << endl;
            return void();
        }
    }
    cout << "Good" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif
    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
