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
    string word; cin >> word;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;

        if (word[i] == 'a' || word[i] == 'o' || word[i] == 'y' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i')
            continue;

        cout << "." << word[i];        
    }
}