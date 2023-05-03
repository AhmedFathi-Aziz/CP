#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int n, m;
char grid[9][9];

string path = "IEHOVA#";

int dx[3] = {-1, 0, 0};
int dy[3] = {0, -1, 1};
string direction[3] = {"forth", "left", "right"};

vector <string> answer;
bool valid(int i, int j) {return (i >= 0 && j >= 0 && i < n && j < m);}

void dfs(int i, int j, int index)
{
    if (index > path.length())
        return;

    for (int k = 0; k < 3; k++)
    {
        int xr = i + dx[k];
        int yc = j + dy[k];

        if (valid(xr, yc) && grid[xr][yc] == path[index])
        {
            answer.push_back(direction[k]);
            dfs(xr, yc, index + 1);
        }
    }    
}

int main()
{
    int cases; cin >> cases;

    pair <int, int> start;
    while (cases--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];

                if (grid[i][j] == '@')
                {
                    start.first = i;
                    start.second = j;
                }
            }
        }

        answer.clear();
        dfs(start.first, start.second, 0);
        cout << answer[0];
        for (int i = 1; i < answer.size(); i++)
            cout << " " << answer[i];
        cout << endl;    
    }
}
