#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string line;
    cin >> n >> line;

    ll answer = 0;
    vector<pair<ll, ll>> a;
    for (int i = 0; i < n; i++) {
        if (line[i] == 'L') {
            if (n - i - 1 > i)
                a.push_back({n - i - 1, i}); 
        }
        else
            if (i > n - i - 1)
                a.push_back({i, n - i - 1});  
        answer += (max(i, n - i - 1));
    }
    sort(a.begin(), a.end());
    int sw = a.size();

    for (int i = 1; i < sw; i++) {
        a[i].first += a[i - 1].first;
        a[i].second += a[i - 1].second;
    }
    for (int i = 1; i <= n; i++) {
        if (i < sw) {
            cout << answer - a[sw - i - 1].first + a[sw - i - 1].second;
        }
        else cout << answer;
        cout << ' ';
    }
    cout << '\n';
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
