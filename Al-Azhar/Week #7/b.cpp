#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    n *= 2;
    int a[n];

    set<int> st;
    int out = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (!st.count(a[i])) {
            st.insert(a[i]);
            out = max(out, (int) st.size());
        }
        else
            st.erase(a[i]);
    }
    cout << out << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
