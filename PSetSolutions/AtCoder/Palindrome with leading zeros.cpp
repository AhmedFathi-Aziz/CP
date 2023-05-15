#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool palindrome(string n) {
   string rev = n;
   reverse(rev.begin(), rev.end());
   return rev == n;
}

void doWork() {
   string n;
   cin >> n;
   if (palindrome(n))
      return puts("Yes"), void();
   int sz = n.size() - 1;
   while (n[sz] == '0')
      sz--;
   string newString;
   for (int i = 0; i <= sz; i++)
      newString += n[i];
   if (palindrome(newString))
      puts("Yes");
   else
      puts("No");
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
