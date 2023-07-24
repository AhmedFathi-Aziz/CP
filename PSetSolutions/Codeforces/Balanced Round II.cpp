#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n, k;
   cin >> n >> k;
   int a[n];
   int i = 0;
   for (; i < n; i++)
      cin >> a[i];
   sort(a, a + n);
   int j = 0,
   answer = 0;
   i = 0;
   while (j < n - 1) {
      if (a[j + 1] - a[j] > k)
         answer = max(answer, j - i + 1),
                i = j + 1;
      j++;
   }
   answer = max(answer, j - i + 1);
   cout << n - answer << endl;
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
