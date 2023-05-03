#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int cp[3];
    cp[0] = arr[0], cp[1] = arr[1], cp[2] = arr[2];

    sort(arr, arr + 3);
    cout << arr[0] << '\n' << arr[1] << '\n' << arr[2] << '\n';
    cout << '\n';
    cout << cp[0] << '\n' << cp[1] << '\n' << cp[2];  
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
