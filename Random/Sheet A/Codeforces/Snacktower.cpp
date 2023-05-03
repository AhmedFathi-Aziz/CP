#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;

	vector <int> snacks(n);
	for (int i = 0; i < n; i++)
		cin >> snacks[i];

	int in = n;
	vector <bool> visited(n, false);
	for (int i = 0; i < n; i++)
	{
		visited[snacks[i]] = true;

		if (in == snacks[i])
		{
			while (visited[in])
				cout << in-- << " ";
		}
			cout << endl;
	}

}
