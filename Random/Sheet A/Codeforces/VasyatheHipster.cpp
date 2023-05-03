#include <iostream>
#include <math.h>
#include <vector>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
    int red, blue;
    cin >> red >> blue;

    int different = min(red, blue);

    int same = max(blue, red) - min(blue, red);
    if (same % 2 == 0)
        same /= 2;

    else {
        same -= 1;
        same /= 2;
    }    
    cout << different << " " << same << endl;
}