#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    while (q--) {
        int num;
        cin >> num;
        
        bool found = false;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == num) {
                found = true;
                break;
            }
            else if (a[mid] > num)
                high = mid - 1;
            else low = mid + 1;
        }
        if (found)
            cout << "found\n";
        else cout << "not found\n";
    }
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
