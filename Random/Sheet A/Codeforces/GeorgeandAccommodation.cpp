#include <iostream>
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
    
    int in, capacity, answer = 0;
    while (cases--) {
        cin >> in >> capacity;
        if (capacity - in >= 2)
            answer += 1;
    }
    cout << answer << endl;
}