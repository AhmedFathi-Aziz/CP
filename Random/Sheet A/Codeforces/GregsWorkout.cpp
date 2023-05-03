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
    int cases;
    cin >> cases;
    
    int biceps = 0, back = 0, chest = 0, in = 1;
    while (cases--) {
        int exercise; cin >> exercise;

        if (in == 1)
            chest += exercise;
        else if (in == 2)
            biceps += exercise;
        else if (in == 3)
            back += exercise;

        in += 1;
        if (in == 4)
            in = 1;       
    }
    if (biceps > back && biceps > chest)
        cout << "biceps" << endl;
    else if (back > biceps && back > chest)
        cout << "back" << endl;
    else cout << "chest" << endl;        
}