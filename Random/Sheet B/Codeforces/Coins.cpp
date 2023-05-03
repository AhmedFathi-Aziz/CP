#include <iostream>
#include <iomanip>
#include <fstream>
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
    map <char, int> check;
    check['A'] = 0, check['B'] = 0, check['C'] = 0;

    string s; cin >> s;
    if (s[1] == '>') check[s[0]]++;
    else check[s[2]]++;

    cin >> s;
    if (s[1] == '>') check[s[0]]++;
    else check[s[2]]++;

    cin >> s;
    if (s[1] == '>') check[s[0]]++;
    else check[s[2]]++;

    if (check['A'] == 1 && check['B'] == 1 && check['C'] == 1) 
        cout << "Impossible" << endl;
    else {
        if (check['A'] == 0) cout << 'A';
        else if (check['B'] == 0) cout << 'B';
        else cout << 'C';

        if (check['A'] == 1) cout << 'A';
        else if (check['B'] == 1) cout << 'B';
        else cout << 'C';

        if (check['A'] == 2) cout << 'A';
        else if (check['B'] == 2) cout << 'B';
        else cout << 'C';
    }    
}