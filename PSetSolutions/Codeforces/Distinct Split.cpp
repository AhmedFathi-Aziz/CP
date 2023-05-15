#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   string a;
   cin >> a;
   int fa[26] = {};
   int fb[26] = {};
   for (char &i : a)
         fa[i - 'a']++;

   int out = 0,
   answer = 0;
   for (char & i : a) {
      out = 0;
      ++fb[i - 'a'];
      if (fa[i - 'a'])
         --fa[i - 'a'];
      for (int i = 0; i < 26; i++) {
         if (fa[i])
            ++out;
         if (fb[i])
            ++out;
      }
      answer = max(answer, out);
   }
   cout << answer << endl;
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
