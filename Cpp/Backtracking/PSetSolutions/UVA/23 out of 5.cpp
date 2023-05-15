#include <iostream>
#include <algorithm>
using namespace std;

const int N = 10;
int n;
int a[N];

bool doWork(int index, int value) {

   if (index == 5) {
      if (value == 23)
         return true;
      return false;
   }
   

   return doWork(index + 1, value + a[index]) ||
   doWork(index + 1, value - a[index]) ||
   doWork(index + 1, value * a[index]);

}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4], 
         a[0] || a[1] || a[2] || a[3] || a[4]) {
           sort(a, a + 5);
           bool flag = false;
           do {
               if (doWork(1, a[0])) {
                  flag = true;
                  break;
               }
           } while (next_permutation(a, a + 5));
         if (flag)
            cout << "Possible" << '\n';
         else
            cout << "Impossible" << '\n';
         }
   return 0;
}
