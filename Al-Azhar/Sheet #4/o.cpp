#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    int freq[26] {};
    while (n--) {
        char a;
        cin >> a;
        freq[a - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++) {
        while (freq[i - 'a']--)
            cout << i;
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
