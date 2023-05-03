#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n, t, k, d;
   cin >> n >> t >> k >> d;

   int cases = (n + k - 1) / k;
   int oven1 = 0, oven2 = d;

   for (int i = 0; i < cases; i++)
   {
       if (oven1 < oven2)
            oven1 += t;
       else 
        oven2 += t;    
   }

   if (max(oven1, oven2) < cases * t)
        cout << "Yes" << endl;
   else 
    cout << "No" << endl;     


}