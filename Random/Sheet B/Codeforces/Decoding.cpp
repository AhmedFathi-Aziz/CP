#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#define ll long long
#define ACM ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	ACM
    int n; cin >> n;
    string word;
    cin >> word;

    string decoded = "";

    int i = 0;

    // even -> left
    // odd -> right

    while(n) {
       if (n % 2 != 0)
          decoded += word[i];
        else 
            decoded = word[i] + decoded;

        n -= 1;
        i += 1;     
    }
    cout << decoded << endl;
}