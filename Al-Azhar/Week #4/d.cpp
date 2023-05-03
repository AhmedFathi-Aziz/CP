#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string s;
    cin >> s;

    int firstAB = s.find("AB");
    int firstBA = s.find("BA");
    
    if (firstAB == string::npos || firstBA == string::npos)
        return puts("NO"), void();
    
    int lastab = firstAB;  
    while (s.find("AB", lastab + 1) != string::npos)
        lastab = s.find("AB", lastab + 1);

    int lastba = firstBA;
    while (s.find("BA", lastba + 1) != string::npos) 
        lastba = s.find("BA", lastba + 1);

    if (lastab - firstBA >= 2 || lastba - firstAB >= 2)
        puts("YES");
    else puts("NO");
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
