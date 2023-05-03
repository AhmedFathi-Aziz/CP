#include <bits/stdc++.h>
using namespace std;

void doWork() {
    string a, b;
    cin >> a >> b;
    int xa = 0, xb = 0;

    for (char &i : a) 
        xa += (i == 'X');
    for (char &i : b)
        xb += (i == 'X');
        
    if (a == b)
        cout << '=';
    else if (a.back() == b.back()) {
        if (a.back() == 'S')
            cout << (xa > xb ? '<' : '>');
        else cout << (xa > xb ? '>' : '<');
    }
    else if (a.back() == 'S')
        cout << '<';
    else if (a.back() == 'L')
        cout << '>';
    else {
        if (b.back() == 'S')
            cout << '>';
        else cout << '<';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}