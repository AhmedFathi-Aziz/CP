#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    string s;
    cin >> n >> s;
    int a = 0, m = 0;
    for (char &i : s) {
        if (i == 'A')
            a++;
        else
            m++;
    }
    if (a > m)
        cout << "Ahmed\n";
    else if (a < m)
        cout << "Mostafa\n";
    else cout << "Friendship\n";
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
