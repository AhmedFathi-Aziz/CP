#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string a;
    cin >> n >> a;
    char out = 'a';
    for (char &i : a)
        out = max(out, i);
    cout << out - 'a' + 1 << '\n';
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
