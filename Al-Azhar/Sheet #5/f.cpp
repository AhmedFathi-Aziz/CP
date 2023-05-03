#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(int a, int b) {
    ll answer = 1;
    for (int i = 0 ; i < b; i++)
        answer *= a;
    return answer;
}

void doWork() {
    int a, b;
    cin >> a >> b;
    
    ll answer = 0;
    for (int i = 2; i <= b; i += 2) {
        answer += power(a, i);
    }
    cout << answer << endl;
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
