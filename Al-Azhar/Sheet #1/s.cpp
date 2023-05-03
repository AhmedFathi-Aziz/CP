#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    double s;
    cin >> s;

    if (s >= 0 && s <= 25)
        cout << "Interval [0,25]\n";
    else if (s > 25 && s <= 50)
        cout << "Interval (25,50]\n";
    else if (s > 50 && s <= 75)
        cout << "Interval (50,75]\n";
    else if (s > 75 && s <= 100)
        cout << "Interval (75,100]\n";
    else cout << "Out of Intervals\n";        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}