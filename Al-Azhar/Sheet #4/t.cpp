#include <bits/stdc++.h>
using namespace std;
#define ll long long

string info(string a, string sub) {
    int pos = a.find(sub);
    pos = a.find('=', pos);

    ++pos;
    string in;
    while (a[pos] != '&')
        in += a[pos++];
    return in;
}

void doWork() {
    string url;
    cin >> url;
    url += '&';
    cout << "username: " << info(url, "username") << endl;
    cout << "pwd: " << info(url, "pwd") << endl;
    cout << "profile: " << info(url, "profile") << endl;
    cout << "role: " << info(url, "role") << endl;
    cout << "key: " << info(url, "key") << endl;
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
