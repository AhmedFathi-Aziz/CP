#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    cin >> n;

    int print = n * 2;
    --print; // odd position
    
    int star = 1;
    int space = (print - star) / 2;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < space; i++)
            cout << ' ';
        for (int i = 0; i < star; i++)
            cout << '*';
        
        star += 2;
        space--;
        cout << endl;
    }
    
    space = 0;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < space; i++)
            cout << ' ';
        for (int i = 0; i < print; i++)
            cout << '*';

        space++;
        print -= 2;
        cout << endl;
    }
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
