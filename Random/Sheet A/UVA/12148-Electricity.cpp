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

bool leapYear (int year) {
	return ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0));
}

bool valid (int currentDay, int currentMonth, int currentYear, int previosDay, int previosMonth, int previosYear) {
	if (currentDay == previosDay + 1 && currentMonth == previosMonth && currentYear == previosYear)
		return true;

	else if (currentMonth == 1 && previosMonth == 12 && previosDay == 31 && currentDay == 1 && currentYear == previosYear + 1)
		return true;

	else if (currentMonth == previosMonth + 1 && currentDay == 1) {
		if (previosMonth == 1 && previosDay == 31)
			return true;

		if (previosMonth == 2 && previosDay == 28 + leapYear(previosYear))
			return true;

		if (previosMonth == 3 && previosDay == 31)
			return true;

		if (previosMonth == 4 && previosDay == 30)
			return true;

		if (previosMonth == 5 && previosDay == 31)
			return true;

		if (previosMonth == 6 && previosDay == 30)
			return true;

		if (previosMonth == 7 && previosDay == 31)
			return true;

		if (previosMonth == 8 && previosDay == 31)
			return true;

		if (previosMonth == 9 && previosDay == 30)
			return true;

		if (previosMonth == 10 && previosDay == 31)
			return true;

		if (previosMonth == 11 && previosDay == 30)
			return true;

		if (previosMonth == 12 && previosDay == 31)
			return true;
	}
	return false;
}

int main()
{
	ACM

	int cases;

	int day, month, year, consumption, previosDay, previosMonth, previosYear, previosConsumption;
	int answer, number;
	while (cin >> cases && cases)
	{
		answer = 0, number = 0;
		for (int i = 0; i < cases; i++) {
			cin >> day >> month >> year >> consumption;

			if (i) {
				if (valid(day, month, year, previosDay, previosMonth, previosYear)) {
					answer += consumption - previosConsumption;
					number++;
				}
			}
			previosDay = day, previosMonth = month, previosYear = year, previosConsumption = consumption;
		}
		cout << number << " " << answer << endl;
	}
}
