#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
    vector <int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    
    int answer = abs(v[1] - v[0]) + abs(v[1] - v[2]);
    cout << answer << endl;
}