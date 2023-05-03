#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string a;
    cin >> n >> a;
    stack<char> s;

    for (char &i : a) {
        if (s.empty() || s.top() != i)
            s.push(i);
    }
    cout << s.size() << endl;
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
