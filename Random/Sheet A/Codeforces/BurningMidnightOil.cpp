#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

ll check(int n, int value, int base) {
    
    int answer = value;
    int line = value;

    int i = 1;
    while (line > 0) {
        line = value / pow(base, i);
        answer += line;
        i += 1;
    }
    if (answer >= n)
        return answer;
    else
        return -1;    

}

int main()
{
	ACM
    int n, base;
    cin >> n >> base;

    int start = 1, end = 1e9;
    
    int answer = 0;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (check(n, mid, base) != -1) {
            answer = mid;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    cout << answer << endl;
}