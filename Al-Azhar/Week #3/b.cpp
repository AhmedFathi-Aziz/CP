#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string s;
    cin >> n >> s;

    int one = 0, zero = 0;
    for (char &i : s)
        i == '0' ? zero++ : one++;
    int rm = min(one, zero);
    cout << (one - rm) + (zero - rm) << endl;     
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
