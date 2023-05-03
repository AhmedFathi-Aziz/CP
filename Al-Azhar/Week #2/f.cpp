#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, b;
    cin >> n >> b;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> cut;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] & 1)
            odd++;
        else
            even++;
        
        if (odd == even)
            if (i + 1 != n)
                cut.push_back(abs(a[i] - a[i + 1]));
    }
    sort(cut.begin(), cut.end());
    int out = 0;
    for (int &i : cut) {
        if (i <= b)
            b -= i, out++;
        else break;
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
