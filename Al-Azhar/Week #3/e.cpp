#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    if (n < 26)
        return puts("NO"), void();
    
    bool alphabet[26] {false};
    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        alphabet[tolower(a) - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
        if (!alphabet[i])
            return puts("NO"), void();
    puts("YES");        
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
