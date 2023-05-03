#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   // Maximum subarray sum
   int n;
   cin >> n;
   int a[n];
   for (int &i : a)
      cin >> i;

   for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
         for (int k = i; k <= j; k++)
            cout << a[k] << ' ';
         cout << endl;
      }
   }
   
   int answer = 0;
   for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = i; j < n; j++) {
         sum += a[i];
         answer = max(answer, sum);
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cases = 1;
   // cin >> cases;
   while (cases--)
       doWork();
    return 0;
}
