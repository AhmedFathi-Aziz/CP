#include <iostream>
#include <math.h>
#include <vector>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n = 1e5 + 10;
vector <pair<int, int>> indices(n);
int main()
{
	ACM
	int nn; cin >> nn;
	for (int i = 0; i < nn; i++) {
		int value; cin >> value;
		indices[value].first = i + 1;
		indices[value].second = nn - i;
	}

	int cases; cin >> cases;

	ll vasya = 0, petya = 0;
	while (cases--) {
		int number; 
		cin >> number;

		vasya += indices[number].first;
		petya += indices[number].second;
	}
	cout << vasya << " " << petya << endl;
}