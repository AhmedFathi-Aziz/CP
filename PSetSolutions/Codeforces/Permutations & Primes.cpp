#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
    cin >> n;

    if (n == 1)
        cout << 1;
    else if (n == 2) 
        cout << "1 2";
    else {
        int a[n];
        memset(a, 0, sizeof(a));
        a[0] = 2,
        a[n / 2] = 1,
        a[n - 1] = 3;

        int num = 4;
        for (int i = 0; i < n; i++) {
            if (!a[i])
                a[i] = num++;
            cout << a[i] << ' ';
        }
    }
    cout << endl;
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
