#include <bits/stdc++.h>
using namespace std;

void doWork() {
    int n;
    cin >> n;
    int arr[n];

    bool flag = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1 || arr[i] == 3)
            flag = false;
    }
    if (flag)
        cout << "Good\n";
    else cout << "Bad\n";
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
