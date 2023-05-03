#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int q;
    string a;
    cin >> q >> a;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int n = key.length();
    char en['z' + 1];
    if (q == 1)
        for (int i = 0; i < n; i++)
            en[original[i]] = key[i];
    else
        for (int i = 0; i < n; i++)
            en[key[i]] = original[i];
    
    for (char &i : a)
        cout << en[i];
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
