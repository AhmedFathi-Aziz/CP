#include <bits/stdc++.h>
using namespace std;
#define ll long long

int capacity, cases;
const int n = 2009;

pair<int, int> buffer[n];
int dp[n][n];

int knapsack(int i, int remaining) {
   if (i == cases)
      return 0;
   int &ret = dp[i][remaining];
   if (~ret)
      return ret;
   int take = -1e9;
   if (remaining - buffer[i].first >= 0)
      take = knapsack(i + 1, remaining - buffer[i].first) + buffer[i].second;
   int leave = knapsack(i + 1, remaining);
   return ret = max(take, leave);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   memset(dp, -1, sizeof(dp));
   cin >> capacity >> cases;
   for (int i = 0; i < cases; ++i)
      cin >> buffer[i].first >> buffer[i].second;

   cout << knapsack(0, capacity) << endl;
   return 0;
}
