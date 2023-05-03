#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int sides[3];
   cin >> sides[0] >> sides[1] >> sides[2];
   sort(sides, sides + 3);

   int out = sides[2] - sides[1] - sides[0] + 1;
   cout << (out >= 0 ? out : 0) << '\n';  
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
