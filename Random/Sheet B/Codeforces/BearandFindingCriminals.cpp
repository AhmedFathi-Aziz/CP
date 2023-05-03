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
#include <unordered_map>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
    int cases, index;
    cin >> cases >> index;
    
    int answer = 0;
    vector <int> cities(cases + 1);
    for (int i = 1; i <= cases; i++) {
        cin >> cities[i];
        answer += cities[i];
    }
    
    for (int i = 1; i < index && i <= cases - index ; i++) 
    {
        if (cities[index + i] + cities[index - i] == 1)
            answer--;
    }

    cout << answer << endl;
}
