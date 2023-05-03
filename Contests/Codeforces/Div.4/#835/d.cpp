#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;
    int a[n];
    for (int &i : a)
        cin >> i;
    
    int i = 0, j = 0;
    int cnt = 0;
    while (j < n) {
        while (j < n && a[i] == a[j])
            j++;
        j--;
        if ((i == 0 || (i >= 1 && a[i - 1] > a[i])) &&
            (j == n - 1 || (j != n - 1 && a[j] < a[j + 1])))
                cnt++;
        i = ++j;
    }
    cout << (cnt == 1 ? "yes\n" : "no\n");
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
