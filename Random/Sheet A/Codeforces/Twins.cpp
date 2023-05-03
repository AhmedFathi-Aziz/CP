#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 0;

	vector <int> coins(n);
	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
		sum += coins[i];
	}

	sort(coins.begin(), coins.end(), greater <int>());

	int answer = 0;
	int summation = 0;
	for (int i = 0; i < n; i++)
	{
		// cout << coins[i] << " ";
		summation += coins[i];
		sum -= coins[i];
		answer++;
		if (summation > sum)
		{
			cout << answer << endl;
			break;
		}
	}
}
