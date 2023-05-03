#include <iostream>
#include <math.h>
#include <vector>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
	int n, m;
	cin >> n >> m;
	bool tail = true;
	int i = 0;
	while (n--) {
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++)
				cout << '#';
		}
		else {
			if (tail) {
				for (int j = 0; j < m; j++) {
					if (tail && j == m - 1) {
						cout << '#';
						tail = !tail;
					}
					else cout << '.';
				}
			}
			else {
				cout << '#';
				for (int j = 1; j < m; j++)
					cout << '.';
				tail = !tail;	
			}
		}
		cout << endl;
		i += 1;
	}
}