#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

char matrix[100][100];
int n, m; char color;

int di[4] = {-1, 1, 0, 0};
int dj[4] = {0, 0, 1, -1};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int main()
{
	ACM
    cin >> n >> m >> color;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    set <char> answer;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {

            if (matrix[i][j] == color)
                for (int k = 0; k < 4; k++) {
                    int in1 = i + di[k];
                    int in2 = j + dj[k];

                    if (valid(in1, in2) && matrix[in1][in2] != color && matrix[in1][in2] != '.')
                        answer.insert(matrix[in1][in2]);
                }
        }
    cout << answer.size() << endl;       
}