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
    int n, k;
    cin >> n >> k;

    vector <int> planks(n);
    for (int i = 0; i < n; i++) {
        cin >> planks[i];

        if (i)
            planks[i] += planks[i - 1];
    }
    
    int check = 1e11;
    int index = 0;
    for (int i = k - 1; i < n; i++) {
        int r = i;
        int l = r - (k - 1);

        int answer = planks[r];
        if (l)
            answer = planks[r] - planks[l - 1];
        if (answer < check) {
            check = answer;
            index = l;
        }    
    }
    cout << index + 1 << endl;
}