#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct item {
    int e = 0, g = 0,
    y = 0, p = 0,
    t = 0;
};

void doWork() {
    string a;
    cin >> a;

    item counter;
    for (char &i : a) {
        i = tolower(i);
        if (i == 'e')
            counter.e++;;
        if (i == 'g')
            counter.g++;
        if (i == 'y')
            counter.y++;
        if (i == 'p')
            counter.p++;
        if (i == 't')
            counter.t++;
    } 
    cout << min({counter.e, counter.g, counter.y, counter.p, counter.t}) << endl;
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
