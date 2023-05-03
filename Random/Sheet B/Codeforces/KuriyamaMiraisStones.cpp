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
    int cases; cin >> cases;
    vector <ll> stones(cases);
    for (int i = 0; i < cases; i++)
        cin >> stones[i];
       
    vector <ll> prefix(cases);
    
    for (int i = 0; i < cases; i++) {
        prefix[i] = stones[i];
        if (i)
            prefix[i] += prefix[i - 1];
    }

    sort(stones.begin(), stones.end());
    for (int i = 1; i < cases; i++)
        stones[i] += stones[i - 1];

    cin >> cases;
    int type, l ,r;
    while (cases--) {
        cin >> type >> l >> r;
        l--, r--;
        if (type == 1) {
            if (l)
                cout << prefix[r] - prefix[l - 1] << "\n";
            else cout << prefix[r] << "\n";    
        }
        else {
            if (l)
                cout << stones[r] - stones[l - 1] << "\n";
            else cout << stones[r] << "\n";    
        }
    }    
}