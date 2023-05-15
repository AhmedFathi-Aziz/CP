#include <bits/stdc++.h>
using namespace std;

void doWork() {
    string a;
    cin >> a;
    
    int len = a.size();
    char mini = a.back();

    int count[10] {};
    for (int i = len - 1; i >= 0; i--) {
        if (a[i] <= mini) {
            mini = a[i];
        }
        else
            a[i] += (a[i] != '9');
        count[a[i] - '0']++;
    } 
    for (int i = 0; i < 10; i++)
        cout << string(count[i], i + '0');
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}