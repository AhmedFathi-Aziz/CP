#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
   int n;
   cin >> n;
   
   int s1 = n / 2; 
   int s2 = n / 4;
   s2 /= 2;
   s1 += s2;
   int i = s1 * 2 + s2;

   int j = i - n / 2;
   int k = j - s2;
   int a = i, b = j, c = k;

   i -= j;
   j += j;
   j -= k;
   k += k;
   k -= i;
   i += i;
   if (i == n && j == n && k == n)
      cout << a << ' ' << b << ' ' << c << endl;
   else
      cout << "Impossible" << endl;

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
