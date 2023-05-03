#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string s;
    cin >> n >> s;

    string ss = "Timur";
    sort(s.begin(), s.end());
    sort(ss.begin(), ss.end());

    ss == s ? cout << "yes\n" : cout << "no\n";
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
