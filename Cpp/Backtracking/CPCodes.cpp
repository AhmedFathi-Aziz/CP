#include <iostream>
using namespace std;

string path;
char grid[100][100];
int n, m;

// Rate in maze
void solve(int r, int c) {

   if (r + 1 == n && c + 1 == m) {
      cout << path << endl;
      return; 
   }

   // validate right option (R)
   if (c + 1 < m && grid[r][c + 1] != '#') {
      path.push_back('R');
      solve(r, c + 1);
      path.pop_back();
   }

   // validate down option (D)
   if (r + 1 < n && grid[r + 1][c] != '#') {
      path.push_back('D');
      solve(r + 1, c);
      path.pop_back();
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cin >> n >> m;
   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         cin >> grid[i][j];

   solve(0, 0);

   return 0;
}
