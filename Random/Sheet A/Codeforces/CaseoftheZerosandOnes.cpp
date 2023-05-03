#include <iostream>
#include <algorithm>
#include <assert.h>
#include <string>
#include <vector>
#include <math.h>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main()
{
	ACM
	int n; cin >> n;
	string s; cin >> s;
 
	int zeros = 0, ones = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') ones++;
		else zeros++;
	}
	cout << abs(ones - zeros) << endl;
}