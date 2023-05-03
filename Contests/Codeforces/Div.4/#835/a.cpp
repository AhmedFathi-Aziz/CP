#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int a[3];
    for (int &i : a)
        cin >> i;
    sort(a, a + 3);
    cout << a[1] << '\n';
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
