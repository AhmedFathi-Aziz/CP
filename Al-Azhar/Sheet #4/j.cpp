#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a;
    cin >> a;

    map<char, int> mp;
    for (char &i : a)
        mp[i]++;
    
    for (auto &i : mp)
        cout << i.first << " : " << i.second << endl;
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
