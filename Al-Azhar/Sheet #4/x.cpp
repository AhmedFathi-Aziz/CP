#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;
    
    int n = a.length();
    if (n == 1)
        return cout << a << endl, void();
    string answer (1e4 + 1, 'z');
    string l, r;
    r = a;
    for (int i = 0; i < n - 1; i++) {
        r.erase(0, 1);
        l += a[i];
        string cl = l;
        string cr = r;
        sort(cl.begin(), cl.end());
        sort(cr.begin(), cr.end());
        string ne = cl + cr;
        if (ne < answer)
            answer = ne;
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
