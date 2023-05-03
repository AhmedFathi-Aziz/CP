#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;

    for (char &i : a) {
        if (i == ',')
            i = ' ';
        else if (isupper(i))
            i = tolower(i);
        else i = toupper(i);
    }
    cout << a << endl;
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
