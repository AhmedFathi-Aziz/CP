#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            a.push_back(i);
    cout << a.size() << endl;
    for (int &i : a)
        cout << i << ' ';
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
