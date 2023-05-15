#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    char cur;
    cin >> n >> cur;
    string a;
    cin >> a;
    
    if (cur == 'g')
        return cout << 0 << '\n', void();
        
    vector<int> green;
    for (int i = 0; i < n; i++)
        if (a[i] == 'g')
            green.push_back(i);
    int out = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == cur) {
            int index = upper_bound(green.begin(), green.end(), i) - green.begin();
            if (index == green.size())
                out = max(out, n - i + green[0]);
            else out = max(out, green[index] - i);
        }
    }
    cout << out << '\n';
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