#include <bits/stdc++.h>
using namespace std;

#define ll long long

int f1(int n) {
    return 1;
}

int f2(int n) {
    return n * f1(n- 1);
}

int f3(int n) {
    return n * f2(n - 1);
}

int f4(int n) {
    return n * f3(n - 1);
}

int f5(int n) {
    return n * f4(n - 1);
}

ll dp[101];
ll fib(ll n) {
   if (n == 0 || n == 1)
      return n;
   
   ll &ret = dp[n];
   if (~ret)
      return ret;
   return ret = fib(n - 1) + fib(n - 2);
}

int n, m;
vector<vector<int>> grid, memo;

bool valid(int i, int j) {
   return i < n && j < m;
}

int maxPath(int i, int j) {
   if (!valid(i, j))
      return 0;
   if (i == n - 1 && j == m - 1)
      return grid[i][j];

   int &ret = memo[i][j];
   if (~ret)
         return ret;

   int right = maxPath(i, j + 1);
   int bottom = maxPath(i + 1, j);
   return ret = max(right, bottom) + grid[i][j];
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   grid = {{1, 2, 3, 4, 2},
           {1, 2, 3, 4, 2},
           {1, 2, 3, 4, 2}};
   n = grid.size(), m = grid[0].size();
   memo = vector<vector<int>>(n, vector<int>(m, -1));


   cout << maxPath(0, 0);
   cout << "\n";
   return 0;
}














