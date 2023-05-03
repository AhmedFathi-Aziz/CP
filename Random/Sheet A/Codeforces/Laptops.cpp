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
    int n; cin >> n;

    vector <int> price(n);
    vector <int> quality(n);

    for (int i = 0; i < n; i++)
        cin >> price[i];
    for (int i = 0; i < n; i++)
        cin >> quality[i];
    
    bool right = false;
    for (int i = 1; i < n; i++) {
        if (price[i - 1] < price[i]) {
            if (quality[i - 1] > quality[i]) {
                right = true;
                break;
            }
        }
    }     
    if (right) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;  
}