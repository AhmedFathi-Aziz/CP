#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n = 8;
   char c;
   int a;

   int row[8] = {};
   int col[8] = {};
   for (int i = 0; i < n; i++) {
      cin >> c >> a;
      row[i] = a;
      col[i] = c - 'A';
   }
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
         if (i == j)
            continue;
         if (row[i] == row[j] || col[i] == col[j])
            return cout << "Invalid" << endl,
                   void();
         if (abs(row[i] - row[j]) == abs(col[i] - col[j]))
            return cout << "Invalid" << endl,
                   void();
      }
   }
   cout << "Valid" << endl;
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
