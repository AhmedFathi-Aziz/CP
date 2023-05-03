#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    
    string out;
    int skip = 0;
    while (getline(cin, a)) {
        
        bool flag = false;
        if (a.size() == 0 || a == " ")
            continue;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == '/' && a[i + 1] == '*') {
                skip = 1;
                i++;
                continue;
            }

            if (a[i] == '*' && a[i + 1] == '/' && skip) {
                skip = 0;
                i++;
                continue;
            }

            if (a[i] == '/' && a[i + 1] == '/' && !skip)
                break;
            
            if (!skip) {
                cout << a[i];
                flag = true;
            }
        }
        if (flag && !skip)
            cout << endl;
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
