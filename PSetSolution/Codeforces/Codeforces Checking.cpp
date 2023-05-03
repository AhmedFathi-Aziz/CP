#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   string a = "codeforces";
   char c;
   cin >> c;
   if (a.find(c) != string::npos)
      cout << "yes\n";
   else
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
