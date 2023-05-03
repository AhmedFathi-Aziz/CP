#include <iostream>
#include <set>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set <int> horseshoe;
    horseshoe.insert(s1);
    horseshoe.insert(s2);
    horseshoe.insert(s3);
    horseshoe.insert(s4);
    cout << 4 - horseshoe.size() << endl;
}