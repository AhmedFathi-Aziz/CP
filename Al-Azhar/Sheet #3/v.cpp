#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 1;

void doWork() {
    int n, m;
    cin >> n >> m;

    int freq[N];
    memset(freq, 0, sizeof(freq));  
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i], freq[a[i]]++;
    for (int i = 1; i <= m; i++)
        cout << freq[i] << endl;
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
