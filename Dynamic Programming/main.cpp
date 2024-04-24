#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int a[1000];

int func(int i) {
   if (i > n)
      return 1e9;
   if (i == n)
      return 0;
   
   int one = func(i + 1) + a[i];
   int two = func(i + 2) + a[i];
   return min(one, two);
}

string out = "   ";
void backtrack(int i) {
   if (i == n) {
      cout << out << endl;
      return;
   }
   out[i] = '0';

   backtrack(i + 1);
   out[i] = '1';

   backtrack(i + 1);
   out[i] = ' ';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   n = 3;
   backtrack(0);
}
