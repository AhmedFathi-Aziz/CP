#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct item {
    int val;
    int index;
};

bool com(item a, item b) {
    return a.val > b.val;
}

void doWork() {
    int n;
    cin >> n;
    item a[n];

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i].val;
        a[i].index = i + 1;
        sum += a[i].val;
    }
    sort(a, a + n, com);

    sum -= a[0].val;

    vector<int> out;
    for (int i = 1; i < n; i++) {
        if (sum - a[i].val == a[0].val)
            out.push_back(a[i].index);
    }

    if (sum == a[1].val * 2)
        out.push_back(a[0].index);
    cout << out.size() << endl;
    for (int &i : out)
        cout << i << ' ';
    cout << endl;
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
