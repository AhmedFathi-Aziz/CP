#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n, q;
    string a;
    cin >> n >> q >> a;
    
    while (q--) {
        string fun;
        cin >> fun;
        string::iterator it = a.begin();
        if (fun == "sort") {
            int l, r;
            cin >> l >> r;
            if (r < l)
                swap(l, r);
            
            l--;
            sort(it + l, it + r);
        }
        else if (fun == "reverse") {
            int l, r;
            cin >> l >> r;
            if (r < l)
                swap(l, r);
            l--;
            reverse(it + l, it + r);
        }
        else if (fun == "substr") {
            int l, r;
            cin >> l >> r;
            if (r < l)
                swap(l, r);
            l--, r--;
            int len = r - l + 1;
            cout << a.substr(l, len) << '\n';
        }
        else if (fun == "pop_back")
            a.pop_back();
        else if (fun == "front")
            cout << a.front() << '\n';
        else if (fun == "back")
            cout << a.back() << '\n';
        
        else if (fun == "print") {
            int pos;
            cin >> pos;
            cout << a[pos - 1] << '\n';
        }
        else if (fun == "push_back") {
            char b;
            cin >> b;
            a.push_back(b);
        }
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