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

bool valid(string s1, string s2) {
    int in = s2.length() - 1;
    for (int i = 0; i < (int)s1.length() && in >= 0; i++, in--) {
        if (s1[i] != s2[in])
            return false;
    }
    return true;
}

int main()
{
	ACM
    string s1, s2;
    cin >> s1 >> s2;
    if (valid(s1, s2)) 
        cout << "YES" << endl;
    else cout << "NO" << endl;    
}