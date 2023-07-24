#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   char grid[8][8];
   int i = 0,
       j = 0;
   for (i = 0; i < 8; i++)
      for (j = 0; j < 8; j++)
         cin >> grid[i][j];
   bool flag = false;
   for (i = 0; i < 8; i++) {
      if (flag)
         break;
      for (j = 0; j < 8; j++)
         if (grid[j][i] != '.')
            cout << grid[j][i],
            flag = true;
   }
   cout << '\n';
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
