#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string a = "Yes";
    for (int i = 0; i < 5; i++)
        a = a + a;
    string s;
    cin >> s;

    int j = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == s[j]) {
            j++;
            if (j == s.length())
                return cout << "yes\n", void();
        } else j = 0;
    }
    cout << "no\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
