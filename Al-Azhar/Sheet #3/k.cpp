#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += (a[i] - '0');
    cout << sum << endl;
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
