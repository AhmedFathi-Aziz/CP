#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    
    int a[n + 3];
    int odd[n + 3], even[n + 3];
    memset(odd, 0, sizeof(odd));
    memset(even, 0, sizeof(even));

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        
        odd[i] = odd[i - 1];
        even[i] = even[i - 1];
        if (i & 1)
            odd[i] += a[i];
        else even[i] += a[i];
    }
    int out = 0;
    for (int i = 1; i <= n; i++) {
        int odd_sum = odd[i - 1] + even[n] - even[i];
        int even_sum = even[i - 1] + odd[n] - odd[i];
        if (odd_sum == even_sum)
            out++;
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
