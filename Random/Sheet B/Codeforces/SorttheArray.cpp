#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
    int n; cin >> n;
    vector <int> small(n);
    for (int i = 0; i < n; i++)
        cin >> small[i];

    vector <int> check(n);
    check = small;
    sort(check.begin(), check.end());

    int i = 0, j = 0;
    
    bool valid = true;
    int start = 0, end = 0;

    while (i < n) {
        if (small[i] != check[j] && valid) {
            start = i;
            valid = false;
        }
        else if (small[i] != check[j]) {
            end = i;
        }
        i++, j++;
    }
    
    j = 0;
    vector <int> temp(end - start + 1);
    for (int i = start; i <= end; i++) {
        temp[j] = small[i]; 
        j++;
    }
    reverse(temp.begin(), temp.end());
    
    j = 0;
    for (int i = start; i <= end; i++) {
        small[i] = temp[j];
        j++;
    }

    for (int i = 0; i < n; i++) {
        if (small[i] != check[i]) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << ++start << " " << ++end << endl;
}