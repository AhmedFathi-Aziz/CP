#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dis(int*, int n);

void doWork() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << dis(a, n) << endl;
    delete []a;
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

int dis(int *a, int n) {
    int pos[1001] {};
    int neg[1001] {};
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) pos[a[i]] = true;
        else neg[-a[i]] = true;
    }
    int answer = 0;
    for (int i = 0; i < 1001; i++)
        answer += pos[i] + neg[i];
    return answer;
}
